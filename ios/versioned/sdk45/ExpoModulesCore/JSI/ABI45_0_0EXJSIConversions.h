// Copyright 2018-present 650 Industries. All rights reserved.

#ifdef __cplusplus

#import <Foundation/Foundation.h>

#import <ABI45_0_0jsi/ABI45_0_0jsi.h>
#import <ABI45_0_0React/ABI45_0_0RCTBridgeModule.h>
#import <ABI45_0_0ReactCommon/ABI45_0_0CallInvoker.h>

using namespace ABI45_0_0facebook;
using namespace ABI45_0_0React;

@class ABI45_0_0EXJavaScriptValue;
@class ABI45_0_0EXJavaScriptRuntime;

namespace ABI45_0_0expo {

jsi::Value convertNSNumberToJSIBoolean(jsi::Runtime &runtime, NSNumber *value);

jsi::Value convertNSNumberToJSINumber(jsi::Runtime &runtime, NSNumber *value);

jsi::String convertNSStringToJSIString(jsi::Runtime &runtime, NSString *value);

jsi::Object convertNSDictionaryToJSIObject(jsi::Runtime &runtime, NSDictionary *value);

jsi::Array convertNSArrayToJSIArray(jsi::Runtime &runtime, NSArray *value);

std::vector<jsi::Value> convertNSArrayToStdVector(jsi::Runtime &runtime, NSArray *value);

jsi::Value convertObjCObjectToJSIValue(jsi::Runtime &runtime, id value);

NSString *convertJSIStringToNSString(jsi::Runtime &runtime, const jsi::String &value);

NSArray *convertJSIArrayToNSArray(jsi::Runtime &runtime, const jsi::Array &value, std::shared_ptr<CallInvoker> jsInvoker);

NSArray<ABI45_0_0EXJavaScriptValue *> *convertJSIValuesToNSArray(ABI45_0_0EXJavaScriptRuntime *runtime, const jsi::Value *values, size_t count);

NSDictionary *convertJSIObjectToNSDictionary(jsi::Runtime &runtime, const jsi::Object &value, std::shared_ptr<CallInvoker> jsInvoker);

id convertJSIValueToObjCObject(jsi::Runtime &runtime, const jsi::Value &value, std::shared_ptr<CallInvoker> jsInvoker);

ABI45_0_0RCTResponseSenderBlock convertJSIFunctionToCallback(jsi::Runtime &runtime, const jsi::Function &value, std::shared_ptr<CallInvoker> jsInvoker);

} // namespace ABI45_0_0expo

#endif
