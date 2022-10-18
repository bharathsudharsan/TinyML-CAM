## TinyML-CAM - Image Recognition System that Runs at 80 FPS in 1 Kb RAM

### Demo - HOG and Random Forest based Image Recognition on ESP32
ESP32 classifying Raspberry Pi Pico, Portenta H7, Wio Terminal from image frames

https://user-images.githubusercontent.com/16524846/179447640-d7f5efa9-3a44-431c-922d-348ee526c782.mp4

### Results

Following can be observed from the video:

 - **Time.** For image frames, the digital signal processing (DSP) based features extraction time is ≈ 12 ms, while classification time is ≈ < 20 𝜇𝑠 (1/1000<sup>th</sup> of DSP).

 - **FPS.** It is 1000/12 ms = 83.3 FPS, which is the time taken by the TinyML-CAM system for HOG features extraction (using DSP) plus classification. Since the ESP32 has a 30 FPS frame rate, just to capture frames, it takes 1000/30 = 33 ms. Since the DSP plus classification time is only ≈ 12 ms, the image recognition happens in real-time between two consecutive frames, thus not altering the ESP32 camera's FPS. 

 - **Accuracy.** As expected during Pairplot analysis, Portenta and Pi (features overlapped) are mislabelled quite often, which can be rectified by improving dataset quality.

 - **Memory.** Consumes only 1 kB of RAM - difference between the RAM calculated by Arduino IDE before and after adding the TinyML-CAM image recognition system.

### Paper 

[https://dl.acm.org/doi/pdf/10.1145/3495243.3558264](https://dl.acm.org/doi/pdf/10.1145/3495243.3558264)

### Requirements

- To capture images from the ESP32 with ease, install Eloquent library via Arduino IDE library manager. 
- To collect images on a PC and train an ML classifier, install EverywhereML Python package.
- To test the TinyML-CAM pipeline, users only require an ESP32 of any variant:
  - [AI Thinker](https://randomnerdtutorials.com/program-upload-code-esp32-cam/) (the most widely used)
  - [M5Stack](https://shop.m5stack.com/products/esp32-camera?variant=16804741316698) (recommend as it comes with 4 Mb external PSRAM)
  - [Espressif](https://www.espressif.com/en/products/devkits/esp-eye/overview)
 
### Code
- [[ino]-CameraWebServer.ino](https://github.com/bharathsudharsan/TinyML-CAM/blob/main/%5Bino%5D-CameraWebServer.ino) - For image dataset collection. After upload to ESP32, it will connect to WiFi network and start an HTTP video streaming server that can be accessed from any web broswer.
- [[h]-HogClassifier.h](https://github.com/bharathsudharsan/TinyML-CAM/blob/main/%5Bh%5D-HogClassifier.h) - Contains the RandomForestClassifier trained using the collected image data.
- [[h]-HogPipeline.h](https://github.com/bharathsudharsan/TinyML-CAM/blob/main/%5Bh%5D-HogPipeline.h) - Contains the HOG features extrator for image frames.
- [[ino]-arduino-ESP32-code.ino](https://github.com/bharathsudharsan/TinyML-CAM/blob/main/%5Bino%5D-arduino-ESP32-code.ino) - Upload to ESP32 along with the above two .h files. After upload, put your objects in front of the camera to see predicted labels.
- [[ipynb]-TinyML-CAM-full-code-with-markdown.ipynb](https://github.com/bharathsudharsan/TinyML-CAM/blob/main/%5Bipynb%5D-TinyML-CAM-full-code-with-markdown.ipynb) - Contains all the required code required for this project, along with sample outputs in each step.

### Future Work

To lower the DSP time (currently 12 ms) by implementing mathematical approximation methods, which will boost the frame rate - i.e., if reduced to 6 ms, then 1000/6 ms = 166.6 FPS. 

Similar to the [TinyML benchmark](https://github.com/bharathsudharsan/TinyML-Benchmark-NNs-on-MCUs), we plan to test the pipeline on a range of datasets, ML algorithms, and IoT boards.
