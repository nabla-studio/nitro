///
/// HybridChildSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/JHybridObject.hpp>
#include <fbjni/fbjni.h>
#include "HybridChildSpec.hpp"

// Forward declaration of `JHybridBaseSpec` to properly resolve imports.
namespace margelo::nitro::image { class JHybridBaseSpec; }
#include "JHybridBaseSpec.hpp"

namespace margelo::nitro::image {

  using namespace facebook;

  class JHybridChildSpec: public jni::HybridClass<JHybridChildSpec, JHybridBaseSpec>,
                          public virtual HybridChildSpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/HybridChildSpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  protected:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridChildSpec(jni::alias_ref<jhybridobject> jThis) :
      HybridObject(HybridChildSpec::TAG),
      HybridBase(jThis),
      _javaPart(jni::make_global(jThis)) {}

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline const jni::global_ref<JHybridChildSpec::javaobject>& getJavaPart() const noexcept {
      return _javaPart;
    }

  public:
    // Properties
    double getChildValue() override;
    double getBaseValue() override;

  public:
    // Methods
    

  private:
    friend HybridBase;
    using HybridBase::HybridBase;
    jni::global_ref<JHybridChildSpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::image