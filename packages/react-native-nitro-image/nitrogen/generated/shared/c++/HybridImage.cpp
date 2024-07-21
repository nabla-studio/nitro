///
/// HybridImage.cpp
/// Mon Jul 22 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridImage.hpp"

void HybridImage::loadHybridMethods() {
  // load base methods/properties
  HybridObject::loadHybridMethods();
  // load custom methods/properties
  registerHybridGetter("size", &HybridImage::getSize, this);
  registerHybridGetter("pixelFormat", &HybridImage::getPixelFormat, this);
  registerHybridGetter("someSettableProp", &HybridImage::getSomeSettableProp, this);
  registerHybridSetter("someSettableProp", &HybridImage::setSomeSettableProp, this);
  registerHybridMethod("toArrayBuffer", &HybridImage::toArrayBuffer, this);
  registerHybridMethod("saveToFile", &HybridImage::saveToFile, this);
}