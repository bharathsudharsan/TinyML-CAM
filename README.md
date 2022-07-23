# TinyML-CAM - Image Recognition System that Runs at 60 FPS in 1 Kb of RAM

### Image Recognition Demo - ESP32
ESP32 classifying Raspberry Pi Pico, Portenta H7, Wio Terminal from image frames

https://user-images.githubusercontent.com/16524846/179447640-d7f5efa9-3a44-431c-922d-348ee526c782.mp4

Following can be observed from the video:

 - **Time** For image frames, the digital signal processing (DSP) based features extraction time is ≈ 12 ms, while classification time is ≈ < 20 𝜇𝑠 (1/1000<sup>th</sup> of DSP).

 - **FPS** It is 1000/12 ms = 83.3 FPS, which is the time taken by the TinyML-CAM image recognition system to process (DSP) plus classify using a single image frame. Since the ESP32 has a 30 FPS frame rate, just to capture frames, it takes 1000/30 = 33 ms. So the entire frame rate is 1000/(33+12) = 22 FPS.

 - **Accuracy** As expected during Pairplot analysis, Portenta and Pi (features overlapped) are mislabelled quite often, which can be rectified by improving dataset quality.

 - **Memory** Consumes only 1 kB of RAM - difference between the RAM calculated by Arduino IDE before and after adding the TinyML-CAM image recognition system.
