#include "eloquent.h"
#include "eloquent/print.h"
#include "eloquent/tinyml/voting/quorum.h"

// replace 'm5wide' with your own model
// possible values are 'aithinker', 'eye', 'm5stack', 'm5wide', 'wrover'
#include "eloquent/vision/camera/m5wide.h"

#include "HogPipeline.h"
#include "HogClassifier.h"

Eloquent::TinyML::Voting::Quorum<7> quorum;


void setup() {
  Serial.begin(115200);
  delay(3000);
  Serial.println("Begin");

  camera.qqvga();
  camera.grayscale();

  while (!camera.begin())
    Serial.println("Cannot init camera");
}

void loop() {
  if (!camera.capture()) {
      Serial.println(camera.getErrorMessage());
      delay(1000);
      return;
  }
  
  // apply HOG pipeline to camera frame
  hog.transform(camera.buffer);

  // get a stable prediction
  // this is optional, but will improve the stability of predictions
  uint8_t prediction = classifier.predict(hog.features);
  int8_t stablePrediction = quorum.vote(prediction);

  if (quorum.isStable()) {
    eloquent::print::printf(
      Serial, 
      "Stable prediction: %s \t(DSP: %d ms, Classifier: %d us)\n", 
      classifier.getLabelOf(stablePrediction),
      hog.latencyInMillis(),
      classifier.latencyInMicros()
    );
  }

  camera.free();
}