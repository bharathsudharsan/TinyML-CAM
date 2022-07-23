#include "eloquent.h"
#include "eloquent/networking/wifi.h"
#include "eloquent/vision/camera/esp32/webserver.h"

// replace 'm5wide' with your own model
// possible values are 'aithinker', 'eye', 'm5stack', 'm5wide', 'wrover'
#include "eloquent/vision/camera/m5wide.h"


void setup() {
    Serial.begin(115200);

    // configure camera
    camera.jpeg();
    camera.qqvga();

    // replace with your WiFi credentials
    while (!wifi.connectTo("Abc", "12345678"))
        Serial.println("Cannot connect to WiFi");

    while (!camera.begin())
        Serial.println("Cannot connect to camera");

    webServer.start();
    Serial.print("Camera web server started at http://");
    Serial.println(WiFi.localIP());
}

void loop() {
    // do nothing
}