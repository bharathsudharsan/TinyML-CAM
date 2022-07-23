#ifndef UUID5853197456
#define UUID5853197456


    #ifndef UUID5853199664
#define UUID5853199664

/**
  * HOG(block_size=8, bins=9, cell_size=3)
 */
class HOG {
    public:

        /**
         * Transform input image
         */
         template<typename T, typename U>
        bool transform(T *input, U *output) {
            
    uint16_t f = 0;
    uint16_t block = 0;
    float hog[135] = {0};

    // compute gradients
    for (uint16_t blockY = 0; blockY < 3; blockY++) {
        const uint16_t blockOffsetY = blockY * 320;

        for (uint16_t blockX = 0; blockX < 5; blockX++) {
            const uint16_t blockOffsetX = blockX * 8;
            float hist[9] = {0};

            for (uint16_t _y = 1; _y < 7; _y += 1) {
                const uint16_t rowOffset = blockOffsetY + _y * 40 + blockOffsetX;
                const uint16_t rowOffsetBefore = rowOffset - 40;
                const uint16_t rowOffsetAfter = rowOffset + 40;

                for (uint16_t _x = 1; _x < 7; _x += 1) {
                    const uint16_t offset = rowOffset + _x;
                    const uint16_t offsetBefore = rowOffsetBefore + _x;
                    const uint16_t offsetAfter = rowOffsetAfter + _x;
                    const float gy = input[offsetAfter] - input[offsetBefore];
                    const float gx = input[offset + 1] - input[offset - 1];
                    const float g = sqrt(gy * gy + gx * gx);
                    uint8_t angle = abs(this->arctan(gy, gx) * 180 / 3.141592653589793f / 20);

                    if (angle >= 8) angle = 8;
                    hist[angle] += g;
                }
            }

            for (uint16_t i = 0; i < 9; i++)
                hog[f++] = hist[i];

            block += 1;

            // end of cell, normalize
            if ((block % 3) == 0) {
                const uint16_t offset = (block - 3) * 9;
                float maxGradient = 0.0001;

                for (uint16_t i = 0; i < 27; i++) {
                    const float h = hog[offset + i];

                    if (h > maxGradient)
                        maxGradient = h;
                }

                for (uint16_t i = 0; i < 27; i++) {
                    hog[offset + i] /= maxGradient;
                }

                maxGradient = 0.0001;
            }
        }
    }


    // copy over
    for (uint16_t i = 0; i < 135; i++)
        output[i] = hog[i];


            return true;
        }

    protected:
        

    /**
     * optional atan2 approximation for faster calculation
     */
    float arctan(float y, float x) {
        
            float r = 0;

            if (abs(y) < 0.00000001)
                return 0;
            else if (abs(x) < 0.00000001)
                return 3.14159274 * (y > 0 ? 1 : -1);
            else {
                float a = min(abs(x), abs(y)) / max(abs(x), abs(y));
                float s = a * a;
                r = ((-0.0464964749 * s + 0.15931422) * s - 0.327622764) * s * a + a;

                if (abs(y) > abs(x))
                r = 1.57079637 - r;
            }

            if (x < 0)
                r = 3.14159274 - r;
            if (y < 0)
                r = -r;

            return r;
        
    }


};



#endif


/**
  * ImagePipeline: HogPipeline
 * ---------
 *  - Resize(from=((160, 120)), to=(40, 30), pixformat=gray)
 *  > HOG(block_size=8, bins=9, cell_size=3)
 */
class HogPipeline {
    public:
        static const size_t NUM_INPUTS = 1200;
        static const size_t NUM_OUTPUTS = 135;
        static const size_t WORKING_SIZE = 135;
        float features[135];

        /**
         * Extract features from input image
         */
        template<typename T>
        bool transform(T *input) {
            time_t start = micros();
            ok = true;

            preprocess(input);

            
                
                    ok = ok && hog.transform(input, features);
                
            

            latency = micros() - start;

            return ok;
        }

        /**
         * Debug output feature vector
         */
        template<typename PrinterInterface>
        void debugTo(PrinterInterface &printer, uint8_t precision=5) {
            printer.print(features[0], precision);

            for (uint16_t i = 1; i < 135; i++) {
                printer.print(", ");
                printer.print(features[i], precision);
            }

            printer.print('\n');
        }

        /**
 * Get latency in micros
 */
uint32_t latencyInMicros() {
    return latency;
}

/**
 * Get latency in millis
 */
uint16_t latencyInMillis() {
    return latency / 1000;
}

    protected:
        bool ok;
        time_t latency;
        
            HOG hog;
        

        template<typename T>
        void preprocess(T *input) {
            
                
    // grayscale rescaling
    const float dy = 4.0f;
    const float dx = 4.0f;

    for (uint16_t y = 0; y < 30; y++) {
        const size_t sourceOffset = round(y * dy) * 160;
        const size_t destOffset = y * 40;

        for (uint16_t x = 0; x < 40; x++)
            input[destOffset + x] = input[sourceOffset + ((uint16_t) (x * dx))];
    }

            
        }
};


static HogPipeline hog;


#endif