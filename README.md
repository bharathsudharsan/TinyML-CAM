## TinyML-CAM - Image Recognition System that Runs at 80 FPS in 1 Kb of RAM

### Image Recognition Demo - ESP32
ESP32 classifying Raspberry Pi Pico, Portenta H7, Wio Terminal from image frames

https://user-images.githubusercontent.com/16524846/179447640-d7f5efa9-3a44-431c-922d-348ee526c782.mp4

Following can be observed from the video:

 - **Time** For image frames, the digital signal processing (DSP) based features extraction time is ≈ 12 ms, while classification time is ≈ < 20 𝜇𝑠 (1/1000<sup>th</sup> of DSP).

 - **FPS** It is 1000/12 ms = 83.3 FPS, which is the time taken by the TinyML-CAM image recognition system to process (DSP) plus classify using a single image frame. Since the ESP32 has a 30 FPS frame rate, just to capture frames, it takes 1000/30 = 33 ms. So the entire frame rate is 1000/(33+12) = 22 FPS.

 - **Accuracy** As expected during Pairplot analysis, Portenta and Pi (features overlapped) are mislabelled quite often, which can be rectified by improving dataset quality.

 - **Memory** Consumes only 1 kB of RAM - difference between the RAM calculated by Arduino IDE before and after adding the TinyML-CAM image recognition system.

### Code
- [[ino]-CameraWebServer.ino](https://github.com/bharathsudharsan/TinyML-CAM/blob/main/%5Bino%5D-CameraWebServer.ino) - For image dataset collection. After upload to ESP32, it will connect to WiFi network and start an HTTP video streaming server that can be accessed from any web broswer.
- [[h]-HogClassifier.h](https://github.com/bharathsudharsan/TinyML-CAM/blob/main/%5Bh%5D-HogClassifier.h) - Contains the RandomForestClassifier trained using the collected image data.
- [[h]-HogPipeline.h](https://github.com/bharathsudharsan/TinyML-CAM/blob/main/%5Bh%5D-HogPipeline.h) - Contains the HOG features extrator for image frames.
- [[ino]-arduino-ESP32-code.ino](https://github.com/bharathsudharsan/TinyML-CAM/blob/main/%5Bino%5D-arduino-ESP32-code.ino) - Upload to ESP32 along with the above two .h files. After upload, put your objects in front of the camera to see predicted labels.
- [[ipynb]-TinyML-CAM-full-code-with-markdown.ipynb](https://github.com/bharathsudharsan/TinyML-CAM/blob/main/%5Bipynb%5D-TinyML-CAM-full-code-with-markdown.ipynb) - Contains all the required code required for this project, along with sample outputs in each step.
