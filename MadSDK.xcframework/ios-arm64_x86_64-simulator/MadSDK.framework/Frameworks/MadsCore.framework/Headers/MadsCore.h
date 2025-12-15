#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MadsCoreAdToShow, MadsCoreAdToShowAnalyticsPixel, MadsCoreAnalyticsModule, MadsCoreDiagnosticsModule, MadsCoreInAppAd, MadsCoreInAppAdItemAlignment, MadsCoreInAppAdItemButtonStyle, MadsCoreInAppAdItemFont, MadsCoreInAppAdLoader, MadsCoreInAppAdLoadingInteractor, MadsCoreInAppAdLoadingModule, MadsCoreInAppAdMarkingInfo, MadsCoreInAppAdRequest, MadsCoreInAppAdShowingInteractor, MadsCoreInAppAdShowingModule, MadsCoreInAppAdStatistic, MadsCoreKotlinAbstractCoroutineContextElement, MadsCoreKotlinAbstractCoroutineContextKey<B, E>, MadsCoreKotlinArray<T>, MadsCoreKotlinByteArray, MadsCoreKotlinByteIterator, MadsCoreKotlinCancellationException, MadsCoreKotlinEnum<E>, MadsCoreKotlinEnumCompanion, MadsCoreKotlinException, MadsCoreKotlinIllegalStateException, MadsCoreKotlinKTypeProjection, MadsCoreKotlinKTypeProjectionCompanion, MadsCoreKotlinKVariance, MadsCoreKotlinNothing, MadsCoreKotlinRuntimeException, MadsCoreKotlinThrowable, MadsCoreKotlinUnit, MadsCoreKotlinx_coroutines_coreCoroutineDispatcher, MadsCoreKotlinx_coroutines_coreCoroutineDispatcherKey, MadsCoreKotlinx_io_coreBuffer, MadsCoreKotlinx_serialization_coreSerialKind, MadsCoreKotlinx_serialization_coreSerializersModule, MadsCoreKtor_client_coreHttpClient, MadsCoreKtor_client_coreHttpClientCall, MadsCoreKtor_client_coreHttpClientCallCompanion, MadsCoreKtor_client_coreHttpClientConfig<T>, MadsCoreKtor_client_coreHttpClientEngineConfig, MadsCoreKtor_client_coreHttpReceivePipeline, MadsCoreKtor_client_coreHttpReceivePipelinePhases, MadsCoreKtor_client_coreHttpRequestBuilder, MadsCoreKtor_client_coreHttpRequestBuilderCompanion, MadsCoreKtor_client_coreHttpRequestData, MadsCoreKtor_client_coreHttpRequestPipeline, MadsCoreKtor_client_coreHttpRequestPipelinePhases, MadsCoreKtor_client_coreHttpResponse, MadsCoreKtor_client_coreHttpResponseContainer, MadsCoreKtor_client_coreHttpResponseData, MadsCoreKtor_client_coreHttpResponsePipeline, MadsCoreKtor_client_coreHttpResponsePipelinePhases, MadsCoreKtor_client_coreHttpSendPipeline, MadsCoreKtor_client_coreHttpSendPipelinePhases, MadsCoreKtor_client_coreProxyConfig, MadsCoreKtor_eventsEventDefinition<T>, MadsCoreKtor_eventsEvents, MadsCoreKtor_httpContentType, MadsCoreKtor_httpContentTypeCompanion, MadsCoreKtor_httpHeaderValueParam, MadsCoreKtor_httpHeaderValueWithParameters, MadsCoreKtor_httpHeaderValueWithParametersCompanion, MadsCoreKtor_httpHeadersBuilder, MadsCoreKtor_httpHttpMethod, MadsCoreKtor_httpHttpMethodCompanion, MadsCoreKtor_httpHttpProtocolVersion, MadsCoreKtor_httpHttpProtocolVersionCompanion, MadsCoreKtor_httpHttpStatusCode, MadsCoreKtor_httpHttpStatusCodeCompanion, MadsCoreKtor_httpOutgoingContent, MadsCoreKtor_httpURLBuilder, MadsCoreKtor_httpURLBuilderCompanion, MadsCoreKtor_httpURLProtocol, MadsCoreKtor_httpURLProtocolCompanion, MadsCoreKtor_httpUrl, MadsCoreKtor_httpUrlCompanion, MadsCoreKtor_utilsAttributeKey<T>, MadsCoreKtor_utilsGMTDate, MadsCoreKtor_utilsGMTDateCompanion, MadsCoreKtor_utilsMonth, MadsCoreKtor_utilsMonthCompanion, MadsCoreKtor_utilsPipeline<TSubject, TContext>, MadsCoreKtor_utilsPipelinePhase, MadsCoreKtor_utilsStringValuesBuilderImpl, MadsCoreKtor_utilsTypeInfo, MadsCoreKtor_utilsWeekDay, MadsCoreKtor_utilsWeekDayCompanion, MadsCoreMadsCoreCommonModules, MadsCoreMads_gatewayGatewayApi, MadsCoreMads_gatewayGatewayModule, MadsCoreNetworkModule;

@protocol MadsCoreDiagnostics, MadsCoreDiagnosticsPlatformModule, MadsCoreInAppAdItem, MadsCoreInAppAdRepository, MadsCoreKotlinAnnotation, MadsCoreKotlinAutoCloseable, MadsCoreKotlinComparable, MadsCoreKotlinContinuation, MadsCoreKotlinContinuationInterceptor, MadsCoreKotlinCoroutineContext, MadsCoreKotlinCoroutineContextElement, MadsCoreKotlinCoroutineContextKey, MadsCoreKotlinFunction, MadsCoreKotlinIterator, MadsCoreKotlinKAnnotatedElement, MadsCoreKotlinKClass, MadsCoreKotlinKClassifier, MadsCoreKotlinKDeclarationContainer, MadsCoreKotlinKType, MadsCoreKotlinMapEntry, MadsCoreKotlinSequence, MadsCoreKotlinSuspendFunction2, MadsCoreKotlinx_coroutines_coreChildHandle, MadsCoreKotlinx_coroutines_coreChildJob, MadsCoreKotlinx_coroutines_coreCoroutineScope, MadsCoreKotlinx_coroutines_coreDisposableHandle, MadsCoreKotlinx_coroutines_coreJob, MadsCoreKotlinx_coroutines_coreParentJob, MadsCoreKotlinx_coroutines_coreRunnable, MadsCoreKotlinx_coroutines_coreSelectClause, MadsCoreKotlinx_coroutines_coreSelectClause0, MadsCoreKotlinx_coroutines_coreSelectInstance, MadsCoreKotlinx_io_coreRawSink, MadsCoreKotlinx_io_coreRawSource, MadsCoreKotlinx_io_coreSink, MadsCoreKotlinx_io_coreSource, MadsCoreKotlinx_serialization_coreCompositeDecoder, MadsCoreKotlinx_serialization_coreCompositeEncoder, MadsCoreKotlinx_serialization_coreDecoder, MadsCoreKotlinx_serialization_coreDeserializationStrategy, MadsCoreKotlinx_serialization_coreEncoder, MadsCoreKotlinx_serialization_coreKSerializer, MadsCoreKotlinx_serialization_coreSerialDescriptor, MadsCoreKotlinx_serialization_coreSerializationStrategy, MadsCoreKotlinx_serialization_coreSerializersModuleCollector, MadsCoreKtor_client_coreClientPlugin, MadsCoreKtor_client_coreHttpClientEngine, MadsCoreKtor_client_coreHttpClientEngineCapability, MadsCoreKtor_client_coreHttpClientPlugin, MadsCoreKtor_client_coreHttpRequest, MadsCoreKtor_httpHeaders, MadsCoreKtor_httpHttpMessage, MadsCoreKtor_httpHttpMessageBuilder, MadsCoreKtor_httpParameters, MadsCoreKtor_httpParametersBuilder, MadsCoreKtor_ioByteReadChannel, MadsCoreKtor_ioCloseable, MadsCoreKtor_ioJvmSerializable, MadsCoreKtor_utilsAttributes, MadsCoreKtor_utilsStringValues, MadsCoreKtor_utilsStringValuesBuilder, MadsCoreMadsCorePlatformModules, MadsCoreNetworkPlatformModule, MadsCoreShowingAnalyticsEvent, MadsCoreShowingAnalyticsRepository;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MadsCoreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MadsCoreBase (MadsCoreBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MadsCoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MadsCoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMadsCoreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MadsCoreNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MadsCoreByte : MadsCoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MadsCoreUByte : MadsCoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MadsCoreShort : MadsCoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MadsCoreUShort : MadsCoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MadsCoreInt : MadsCoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MadsCoreUInt : MadsCoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MadsCoreLong : MadsCoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MadsCoreULong : MadsCoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MadsCoreFloat : MadsCoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MadsCoreDouble : MadsCoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MadsCoreBoolean : MadsCoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MadsCoreCommonModules")))
@interface MadsCoreMadsCoreCommonModules : MadsCoreBase
- (instancetype)initWithPlatformModulesProvider:(id<MadsCoreMadsCorePlatformModules> (^)(void))platformModulesProvider __attribute__((swift_name("init(platformModulesProvider:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MadsCoreAnalyticsModule *analyticsModule __attribute__((swift_name("analyticsModule")));
@property (readonly) MadsCoreDiagnosticsModule *diagnosticsModule __attribute__((swift_name("diagnosticsModule")));
@property (readonly) MadsCoreMads_gatewayGatewayModule *gatewayModule __attribute__((swift_name("gatewayModule")));
@property (readonly) MadsCoreInAppAdLoadingModule *inAppAdLoadingModule __attribute__((swift_name("inAppAdLoadingModule")));
@property (readonly) MadsCoreInAppAdShowingModule *inAppAdShowingModule __attribute__((swift_name("inAppAdShowingModule")));
@property (readonly) MadsCoreNetworkModule *networkModule __attribute__((swift_name("networkModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MadsCoreModules")))
@interface MadsCoreMadsCoreModules : MadsCoreBase
- (instancetype)initWithPlatformModulesFactory:(id<MadsCoreMadsCorePlatformModules> (^)(MadsCoreMadsCoreCommonModules *(^)(void)))platformModulesFactory __attribute__((swift_name("init(platformModulesFactory:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MadsCoreDiagnosticsModule *diagnosticsModule __attribute__((swift_name("diagnosticsModule")));
@property (readonly) MadsCoreInAppAdLoadingModule *inAppAdLoadingModule __attribute__((swift_name("inAppAdLoadingModule")));
@property (readonly) MadsCoreInAppAdShowingModule *inAppAdShowingModule __attribute__((swift_name("inAppAdShowingModule")));
@end

__attribute__((swift_name("MadsCorePlatformModules")))
@protocol MadsCoreMadsCorePlatformModules
@required
@property (readonly) id<MadsCoreDiagnosticsPlatformModule> diagnosticsPlatformModule __attribute__((swift_name("diagnosticsPlatformModule")));
@property (readonly) id<MadsCoreNetworkPlatformModule> networkPlatformModule __attribute__((swift_name("networkPlatformModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsModule")))
@interface MadsCoreAnalyticsModule : MadsCoreBase
- (instancetype)initWithGatewayModuleProvider:(MadsCoreMads_gatewayGatewayModule *(^)(void))gatewayModuleProvider diagnosticsModuleProvider:(MadsCoreDiagnosticsModule *(^)(void))diagnosticsModuleProvider networkModule:(MadsCoreNetworkModule *)networkModule __attribute__((swift_name("init(gatewayModuleProvider:diagnosticsModuleProvider:networkModule:)"))) __attribute__((objc_designated_initializer));
- (id<MadsCoreShowingAnalyticsRepository>)provideShowingAnalyticsRepository __attribute__((swift_name("provideShowingAnalyticsRepository()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdToShow")))
@interface MadsCoreAdToShow : MadsCoreBase
- (instancetype)initWithPadId:(NSString *)padId hasAdFacadeStatsEnabled:(BOOL)hasAdFacadeStatsEnabled analyticsPixels:(NSArray<MadsCoreAdToShowAnalyticsPixel *> *)analyticsPixels __attribute__((swift_name("init(padId:hasAdFacadeStatsEnabled:analyticsPixels:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<MadsCoreAdToShowAnalyticsPixel *> *analyticsPixels __attribute__((swift_name("analyticsPixels")));
@property (readonly) BOOL hasAdFacadeStatsEnabled __attribute__((swift_name("hasAdFacadeStatsEnabled")));
@property (readonly) NSString *padId __attribute__((swift_name("padId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdToShow.AnalyticsPixel")))
@interface MadsCoreAdToShowAnalyticsPixel : MadsCoreBase
- (instancetype)initWithType:(NSString *)type url:(NSString *)url params:(NSDictionary<NSString *, NSString *> * _Nullable)params __attribute__((swift_name("init(type:url:params:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable params __attribute__((swift_name("params")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("ShowingAnalyticsEvent")))
@protocol MadsCoreShowingAnalyticsEvent
@required
@end

__attribute__((swift_name("ShowingAnalyticsEventClose")))
@interface MadsCoreShowingAnalyticsEventClose : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventDeeplinkClick")))
@interface MadsCoreShowingAnalyticsEventDeeplinkClick : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventFullscreenOff")))
@interface MadsCoreShowingAnalyticsEventFullscreenOff : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventFullscreenOn")))
@interface MadsCoreShowingAnalyticsEventFullscreenOn : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventImpression")))
@interface MadsCoreShowingAnalyticsEventImpression : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)initWithViewablePercent:(id)viewablePercent __attribute__((swift_name("init(viewablePercent:)"))) __attribute__((objc_designated_initializer));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) id viewablePercent __attribute__((swift_name("viewablePercent")));
@end

__attribute__((swift_name("ShowingAnalyticsEventPlaybackCompleted")))
@interface MadsCoreShowingAnalyticsEventPlaybackCompleted : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventPlaybackOvvFalse")))
@interface MadsCoreShowingAnalyticsEventPlaybackOvvFalse : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)initWithViewablePercent:(id)viewablePercent value:(id)value pvalue:(id)pvalue __attribute__((swift_name("init(viewablePercent:value:pvalue:)"))) __attribute__((objc_designated_initializer));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) id pvalue __attribute__((swift_name("pvalue")));
@property (readonly) id value __attribute__((swift_name("value")));
@property (readonly) id viewablePercent __attribute__((swift_name("viewablePercent")));
@end

__attribute__((swift_name("ShowingAnalyticsEventPlaybackOvvTrue")))
@interface MadsCoreShowingAnalyticsEventPlaybackOvvTrue : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)initWithViewablePercent:(id)viewablePercent value:(id)value pvalue:(id)pvalue __attribute__((swift_name("init(viewablePercent:value:pvalue:)"))) __attribute__((objc_designated_initializer));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) id pvalue __attribute__((swift_name("pvalue")));
@property (readonly) id value __attribute__((swift_name("value")));
@property (readonly) id viewablePercent __attribute__((swift_name("viewablePercent")));
@end

__attribute__((swift_name("ShowingAnalyticsEventPlaybackPaused")))
@interface MadsCoreShowingAnalyticsEventPlaybackPaused : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventPlaybackReached")))
@interface MadsCoreShowingAnalyticsEventPlaybackReached : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)initWithValue:(id)value pvalue:(id)pvalue __attribute__((swift_name("init(value:pvalue:)"))) __attribute__((objc_designated_initializer));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) id pvalue __attribute__((swift_name("pvalue")));
@property (readonly) id value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("ShowingAnalyticsEventPlaybackResumed")))
@interface MadsCoreShowingAnalyticsEventPlaybackResumed : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventPlaybackStarted")))
@interface MadsCoreShowingAnalyticsEventPlaybackStarted : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventPromoCodeClick")))
@interface MadsCoreShowingAnalyticsEventPromoCodeClick : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventRender")))
@interface MadsCoreShowingAnalyticsEventRender : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventReplay")))
@interface MadsCoreShowingAnalyticsEventReplay : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventSkip")))
@interface MadsCoreShowingAnalyticsEventSkip : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventUnknown")))
@interface MadsCoreShowingAnalyticsEventUnknown : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventViewIn")))
@interface MadsCoreShowingAnalyticsEventViewIn : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventViewabilityMeasurable")))
@interface MadsCoreShowingAnalyticsEventViewabilityMeasurable : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventViewabilityUnmeasurable")))
@interface MadsCoreShowingAnalyticsEventViewabilityUnmeasurable : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventViewableImpression")))
@interface MadsCoreShowingAnalyticsEventViewableImpression : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)initWithViewablePercent:(id)viewablePercent value:(id)value pvalue:(id)pvalue __attribute__((swift_name("init(viewablePercent:value:pvalue:)"))) __attribute__((objc_designated_initializer));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) id pvalue __attribute__((swift_name("pvalue")));
@property (readonly) id value __attribute__((swift_name("value")));
@property (readonly) id viewablePercent __attribute__((swift_name("viewablePercent")));
@end

__attribute__((swift_name("ShowingAnalyticsEventVolumeOff")))
@interface MadsCoreShowingAnalyticsEventVolumeOff : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsEventVolumeOn")))
@interface MadsCoreShowingAnalyticsEventVolumeOn : MadsCoreBase <MadsCoreShowingAnalyticsEvent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@end

__attribute__((swift_name("ShowingAnalyticsRepository")))
@protocol MadsCoreShowingAnalyticsRepository
@required
- (NSArray<id<MadsCoreShowingAnalyticsEvent>> *)getAvailableEventsAd:(MadsCoreAdToShow *)ad __attribute__((swift_name("getAvailableEvents(ad:)")));
@end

__attribute__((swift_name("Diagnostics")))
@protocol MadsCoreDiagnostics
@required
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (void)errorDescription:(NSString *)description __attribute__((swift_name("error(description:)")));
- (void)errorThrowable:(MadsCoreKotlinThrowable *)throwable __attribute__((swift_name("error(throwable:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiagnosticsModule")))
@interface MadsCoreDiagnosticsModule : MadsCoreBase
- (instancetype)initWithPlatformModuleProvider:(id<MadsCoreDiagnosticsPlatformModule> (^)(void))platformModuleProvider __attribute__((swift_name("init(platformModuleProvider:)"))) __attribute__((objc_designated_initializer));
- (id<MadsCoreDiagnostics>)provideDiagnostics __attribute__((swift_name("provideDiagnostics()")));
@end

__attribute__((swift_name("DiagnosticsPlatformModule")))
@protocol MadsCoreDiagnosticsPlatformModule
@required
- (NSArray<id<MadsCoreDiagnostics>> *)providePlatformDiagnostics __attribute__((swift_name("providePlatformDiagnostics()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdLoadingInteractor")))
@interface MadsCoreInAppAdLoadingInteractor : MadsCoreBase
- (instancetype)initWithInAppAdRepository:(id<MadsCoreInAppAdRepository>)inAppAdRepository __attribute__((swift_name("init(inAppAdRepository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadInAppAdRequest:(MadsCoreInAppAdRequest *)request completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("loadInAppAd(request:completionHandler:)")));
@end

__attribute__((swift_name("InAppAdRepository")))
@protocol MadsCoreInAppAdRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getInAppAdRequest:(MadsCoreInAppAdRequest *)request completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getInAppAd(request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdRequest")))
@interface MadsCoreInAppAdRequest : MadsCoreBase
- (instancetype)initWithPadId:(NSString *)padId debugCreative:(BOOL)debugCreative targetings:(NSDictionary<NSString *, NSString *> *)targetings __attribute__((swift_name("init(padId:debugCreative:targetings:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL debugCreative __attribute__((swift_name("debugCreative")));
@property (readonly) NSString *padId __attribute__((swift_name("padId")));
@property (readonly) NSDictionary<NSString *, NSString *> *targetings __attribute__((swift_name("targetings")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdLoader")))
@interface MadsCoreInAppAdLoader : MadsCoreBase
- (instancetype)initWithInAppAdLoadingInteractor:(MadsCoreInAppAdLoadingInteractor *)inAppAdLoadingInteractor coroutineScope:(id<MadsCoreKotlinx_coroutines_coreCoroutineScope>)coroutineScope __attribute__((swift_name("init(inAppAdLoadingInteractor:coroutineScope:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (void)loadAdRequest:(MadsCoreInAppAdRequest *)adRequest onSuccess:(void (^)(MadsCoreInAppAd *))onSuccess onFailure:(void (^)(MadsCoreKotlinThrowable *))onFailure __attribute__((swift_name("load(adRequest:onSuccess:onFailure:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdLoadingModule")))
@interface MadsCoreInAppAdLoadingModule : MadsCoreBase
- (instancetype)initWithGatewayModuleProvider:(MadsCoreMads_gatewayGatewayModule *(^)(void))gatewayModuleProvider diagnosticsModuleProvider:(MadsCoreDiagnosticsModule *(^)(void))diagnosticsModuleProvider __attribute__((swift_name("init(gatewayModuleProvider:diagnosticsModuleProvider:)"))) __attribute__((objc_designated_initializer));
- (MadsCoreInAppAdLoader *)provideInAppAdLoader __attribute__((swift_name("provideInAppAdLoader()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAd")))
@interface MadsCoreInAppAd : MadsCoreBase
- (instancetype)initWithId:(int64_t)id padId:(NSString *)padId advUid:(NSString * _Nullable)advUid hasMarkingLabel:(BOOL)hasMarkingLabel hasTelemetryEnabled:(BOOL)hasTelemetryEnabled hasAdFacadeStatsEnabled:(BOOL)hasAdFacadeStatsEnabled items:(NSArray<id<MadsCoreInAppAdItem>> *)items markingInfo:(MadsCoreInAppAdMarkingInfo * _Nullable)markingInfo statistics:(NSArray<MadsCoreInAppAdStatistic *> * _Nullable)statistics __attribute__((swift_name("init(id:padId:advUid:hasMarkingLabel:hasTelemetryEnabled:hasAdFacadeStatsEnabled:items:markingInfo:statistics:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable advUid __attribute__((swift_name("advUid")));
@property (readonly) BOOL hasAdFacadeStatsEnabled __attribute__((swift_name("hasAdFacadeStatsEnabled")));
@property (readonly) BOOL hasMarkingLabel __attribute__((swift_name("hasMarkingLabel")));
@property (readonly) BOOL hasTelemetryEnabled __attribute__((swift_name("hasTelemetryEnabled")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<id<MadsCoreInAppAdItem>> *items __attribute__((swift_name("items")));
@property (readonly) MadsCoreInAppAdMarkingInfo * _Nullable markingInfo __attribute__((swift_name("markingInfo")));
@property (readonly) NSString *padId __attribute__((swift_name("padId")));
@property (readonly) NSArray<MadsCoreInAppAdStatistic *> * _Nullable statistics __attribute__((swift_name("statistics")));
@end

__attribute__((swift_name("InAppAdItem")))
@protocol MadsCoreInAppAdItem
@required
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MadsCoreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MadsCoreKotlinEnum<E> : MadsCoreBase <MadsCoreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MadsCoreKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdItemAlignment")))
@interface MadsCoreInAppAdItemAlignment : MadsCoreKotlinEnum<MadsCoreInAppAdItemAlignment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MadsCoreInAppAdItemAlignment *left __attribute__((swift_name("left")));
@property (class, readonly) MadsCoreInAppAdItemAlignment *right __attribute__((swift_name("right")));
@property (class, readonly) MadsCoreInAppAdItemAlignment *center __attribute__((swift_name("center")));
+ (MadsCoreKotlinArray<MadsCoreInAppAdItemAlignment *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MadsCoreInAppAdItemAlignment *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdItemButtonStyle")))
@interface MadsCoreInAppAdItemButtonStyle : MadsCoreKotlinEnum<MadsCoreInAppAdItemButtonStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MadsCoreInAppAdItemButtonStyle *primary __attribute__((swift_name("primary")));
@property (class, readonly) MadsCoreInAppAdItemButtonStyle *secondary __attribute__((swift_name("secondary")));
+ (MadsCoreKotlinArray<MadsCoreInAppAdItemButtonStyle *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MadsCoreInAppAdItemButtonStyle *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdItemCloseButton")))
@interface MadsCoreInAppAdItemCloseButton : MadsCoreBase <MadsCoreInAppAdItem>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdItemCopyableButton")))
@interface MadsCoreInAppAdItemCopyableButton : MadsCoreBase <MadsCoreInAppAdItem>
- (instancetype)initWithText:(NSString *)text copyableText:(NSString *)copyableText onCopySuccessText:(NSString *)onCopySuccessText style:(MadsCoreInAppAdItemButtonStyle *)style index:(int32_t)index __attribute__((swift_name("init(text:copyableText:onCopySuccessText:style:index:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *copyableText __attribute__((swift_name("copyableText")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) NSString *onCopySuccessText __attribute__((swift_name("onCopySuccessText")));
@property (readonly) MadsCoreInAppAdItemButtonStyle *style __attribute__((swift_name("style")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdItemDefaultButton")))
@interface MadsCoreInAppAdItemDefaultButton : MadsCoreBase <MadsCoreInAppAdItem>
- (instancetype)initWithText:(NSString *)text deeplink:(NSString *)deeplink style:(MadsCoreInAppAdItemButtonStyle *)style index:(int32_t)index __attribute__((swift_name("init(text:deeplink:style:index:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *deeplink __attribute__((swift_name("deeplink")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) MadsCoreInAppAdItemButtonStyle *style __attribute__((swift_name("style")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdItemFont")))
@interface MadsCoreInAppAdItemFont : MadsCoreKotlinEnum<MadsCoreInAppAdItemFont *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MadsCoreInAppAdItemFont *headlineLarge __attribute__((swift_name("headlineLarge")));
@property (class, readonly) MadsCoreInAppAdItemFont *headlineMedium __attribute__((swift_name("headlineMedium")));
@property (class, readonly) MadsCoreInAppAdItemFont *headlineSmall __attribute__((swift_name("headlineSmall")));
@property (class, readonly) MadsCoreInAppAdItemFont *titleLarge __attribute__((swift_name("titleLarge")));
@property (class, readonly) MadsCoreInAppAdItemFont *titleMedium __attribute__((swift_name("titleMedium")));
@property (class, readonly) MadsCoreInAppAdItemFont *titleSmall __attribute__((swift_name("titleSmall")));
@property (class, readonly) MadsCoreInAppAdItemFont *titleExtraSmall __attribute__((swift_name("titleExtraSmall")));
@property (class, readonly) MadsCoreInAppAdItemFont *titleUltraSmall __attribute__((swift_name("titleUltraSmall")));
@property (class, readonly) MadsCoreInAppAdItemFont *bodyLargeAccent __attribute__((swift_name("bodyLargeAccent")));
@property (class, readonly) MadsCoreInAppAdItemFont *bodyLargeAccentLow __attribute__((swift_name("bodyLargeAccentLow")));
@property (class, readonly) MadsCoreInAppAdItemFont *bodyLargeRegular __attribute__((swift_name("bodyLargeRegular")));
@property (class, readonly) MadsCoreInAppAdItemFont *bodyLargeRegularLow __attribute__((swift_name("bodyLargeRegularLow")));
@property (class, readonly) MadsCoreInAppAdItemFont *bodySmallAccent __attribute__((swift_name("bodySmallAccent")));
@property (class, readonly) MadsCoreInAppAdItemFont *bodySmallAccentLow __attribute__((swift_name("bodySmallAccentLow")));
@property (class, readonly) MadsCoreInAppAdItemFont *bodySmallRegular __attribute__((swift_name("bodySmallRegular")));
@property (class, readonly) MadsCoreInAppAdItemFont *bodySmallRegularLow __attribute__((swift_name("bodySmallRegularLow")));
@property (class, readonly) MadsCoreInAppAdItemFont *captionLargeAccent __attribute__((swift_name("captionLargeAccent")));
@property (class, readonly) MadsCoreInAppAdItemFont *captionLargeAccentLow __attribute__((swift_name("captionLargeAccentLow")));
@property (class, readonly) MadsCoreInAppAdItemFont *captionLargeRegular __attribute__((swift_name("captionLargeRegular")));
@property (class, readonly) MadsCoreInAppAdItemFont *captionLargeRegularLow __attribute__((swift_name("captionLargeRegularLow")));
@property (class, readonly) MadsCoreInAppAdItemFont *captionSmallAccent __attribute__((swift_name("captionSmallAccent")));
@property (class, readonly) MadsCoreInAppAdItemFont *captionSmallAccentLow __attribute__((swift_name("captionSmallAccentLow")));
@property (class, readonly) MadsCoreInAppAdItemFont *captionSmallRegular __attribute__((swift_name("captionSmallRegular")));
@property (class, readonly) MadsCoreInAppAdItemFont *captionSmallRegularLow __attribute__((swift_name("captionSmallRegularLow")));
+ (MadsCoreKotlinArray<MadsCoreInAppAdItemFont *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MadsCoreInAppAdItemFont *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdItemHeader")))
@interface MadsCoreInAppAdItemHeader : MadsCoreBase <MadsCoreInAppAdItem>
- (instancetype)initWithImages:(NSArray<NSString *> *)images __attribute__((swift_name("init(images:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<NSString *> *images __attribute__((swift_name("images")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdItemPadding")))
@interface MadsCoreInAppAdItemPadding : MadsCoreBase <MadsCoreInAppAdItem>
- (instancetype)initWithHeight:(int32_t)height __attribute__((swift_name("init(height:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdItemText")))
@interface MadsCoreInAppAdItemText : MadsCoreBase <MadsCoreInAppAdItem>
- (instancetype)initWithText:(NSString *)text textColor:(NSString *)textColor font:(MadsCoreInAppAdItemFont *)font alignment:(MadsCoreInAppAdItemAlignment *)alignment __attribute__((swift_name("init(text:textColor:font:alignment:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MadsCoreInAppAdItemAlignment *alignment __attribute__((swift_name("alignment")));
@property (readonly) MadsCoreInAppAdItemFont *font __attribute__((swift_name("font")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSString *textColor __attribute__((swift_name("textColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAd.MarkingInfo")))
@interface MadsCoreInAppAdMarkingInfo : MadsCoreBase
- (instancetype)initWithErid:(NSString *)erid label:(NSString *)label __attribute__((swift_name("init(erid:label:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *erid __attribute__((swift_name("erid")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAd.Statistic")))
@interface MadsCoreInAppAdStatistic : MadsCoreBase
- (instancetype)initWithType:(NSString *)type url:(NSString *)url __attribute__((swift_name("init(type:url:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdShowingInteractor")))
@interface MadsCoreInAppAdShowingInteractor : MadsCoreBase
- (instancetype)initWithShowingAnalyticsRepository:(id<MadsCoreShowingAnalyticsRepository>)showingAnalyticsRepository __attribute__((swift_name("init(showingAnalyticsRepository:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id<MadsCoreShowingAnalyticsEvent>> *)getShowingAnalyticsEventsAd:(MadsCoreInAppAd *)ad __attribute__((swift_name("getShowingAnalyticsEvents(ad:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppAdShowingModule")))
@interface MadsCoreInAppAdShowingModule : MadsCoreBase
- (instancetype)initWithAnalyticsModuleProvider:(MadsCoreAnalyticsModule *(^)(void))analyticsModuleProvider __attribute__((swift_name("init(analyticsModuleProvider:)"))) __attribute__((objc_designated_initializer));
- (MadsCoreInAppAdShowingInteractor *)provideInAppAdShowingInteractor __attribute__((swift_name("provideInAppAdShowingInteractor()")));
@end

__attribute__((swift_name("NetworkPlatformModule")))
@protocol MadsCoreNetworkPlatformModule
@required
- (NSString * _Nullable)provideAppVersionName __attribute__((swift_name("provideAppVersionName()")));
- (NSString * _Nullable)provideBundleId __attribute__((swift_name("provideBundleId()")));
- (NSString * _Nullable)provideConnectionTypeName __attribute__((swift_name("provideConnectionTypeName()")));
- (NSString * _Nullable)provideDeviceId __attribute__((swift_name("provideDeviceId()")));
- (NSString * _Nullable)provideGaid __attribute__((swift_name("provideGaid()")));
- (MadsCoreKtor_client_coreHttpClient *)provideHttpClientConfig:(void (^)(MadsCoreKtor_client_coreHttpClientConfig<MadsCoreKtor_client_coreHttpClientEngineConfig *> *))config __attribute__((swift_name("provideHttpClient(config:)")));
- (NSString * _Nullable)provideIdfa __attribute__((swift_name("provideIdfa()")));
- (NSString * _Nullable)provideOsName __attribute__((swift_name("provideOsName()")));
- (NSString * _Nullable)provideOsVersionName __attribute__((swift_name("provideOsVersionName()")));
- (NSString * _Nullable)provideSdkVersionName __attribute__((swift_name("provideSdkVersionName()")));
- (NSString * _Nullable)provideUserId __attribute__((swift_name("provideUserId()")));
- (MadsCoreInt * _Nullable)provideUtcOffset __attribute__((swift_name("provideUtcOffset()")));
@end

__attribute__((swift_name("NetworkIosKmpModule")))
@interface MadsCoreNetworkIosKmpModule : MadsCoreBase <MadsCoreNetworkPlatformModule>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MadsCoreKtor_client_coreHttpClient *)provideHttpClientConfig:(void (^)(MadsCoreKtor_client_coreHttpClientConfig<MadsCoreKtor_client_coreHttpClientEngineConfig *> *))config __attribute__((swift_name("provideHttpClient(config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkModule")))
@interface MadsCoreNetworkModule : MadsCoreBase
- (instancetype)initWithPlatformModuleProvider:(id<MadsCoreNetworkPlatformModule> (^)(void))platformModuleProvider __attribute__((swift_name("init(platformModuleProvider:)"))) __attribute__((objc_designated_initializer));
- (id<MadsCoreKtor_client_coreClientPlugin>)appVersionQueryParamPlugin __attribute__((swift_name("appVersionQueryParamPlugin()")));
- (id<MadsCoreKtor_client_coreClientPlugin>)bundleIdQueryParamPlugin __attribute__((swift_name("bundleIdQueryParamPlugin()")));
- (id<MadsCoreKtor_client_coreClientPlugin>)connectionTypeQueryParamPlugin __attribute__((swift_name("connectionTypeQueryParamPlugin()")));
- (id<MadsCoreKtor_client_coreClientPlugin>)deviceIdQueryParamPlugin __attribute__((swift_name("deviceIdQueryParamPlugin()")));
- (id<MadsCoreKtor_client_coreClientPlugin>)gaidQueryParamPlugin __attribute__((swift_name("gaidQueryParamPlugin()")));
- (MadsCoreKtor_client_coreHttpClient *)httpClientConfig:(void (^)(MadsCoreKtor_client_coreHttpClientConfig<MadsCoreKtor_client_coreHttpClientEngineConfig *> *))config __attribute__((swift_name("httpClient(config:)")));
- (id<MadsCoreKtor_client_coreClientPlugin>)idfaQueryParamPlugin __attribute__((swift_name("idfaQueryParamPlugin()")));
- (id<MadsCoreKtor_client_coreClientPlugin>)osNameQueryParamPlugin __attribute__((swift_name("osNameQueryParamPlugin()")));
- (id<MadsCoreKtor_client_coreClientPlugin>)osVersionQueryParamPlugin __attribute__((swift_name("osVersionQueryParamPlugin()")));
- (id<MadsCoreKtor_client_coreClientPlugin>)sdkVersionQueryParamPlugin __attribute__((swift_name("sdkVersionQueryParamPlugin()")));
- (id<MadsCoreKtor_client_coreClientPlugin>)userIdQueryParamPlugin __attribute__((swift_name("userIdQueryParamPlugin()")));
- (id<MadsCoreKtor_client_coreClientPlugin>)utcOffsetQueryParamPlugin __attribute__((swift_name("utcOffsetQueryParamPlugin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mads_gatewayGatewayModule")))
@interface MadsCoreMads_gatewayGatewayModule : MadsCoreBase
- (instancetype)initWithNetworkModule:(MadsCoreNetworkModule *)networkModule __attribute__((swift_name("init(networkModule:)"))) __attribute__((objc_designated_initializer));
- (MadsCoreMads_gatewayGatewayApi *)provideGatewayApi __attribute__((swift_name("provideGatewayApi()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MadsCoreKotlinThrowable : MadsCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MadsCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MadsCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (MadsCoreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MadsCoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MadsCoreKotlinException : MadsCoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MadsCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MadsCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MadsCoreKotlinRuntimeException : MadsCoreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MadsCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MadsCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MadsCoreKotlinIllegalStateException : MadsCoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MadsCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MadsCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MadsCoreKotlinCancellationException : MadsCoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MadsCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MadsCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MadsCoreKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MadsCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MadsCoreKotlinEnumCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MadsCoreKotlinArray<T> : MadsCoreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MadsCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MadsCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol MadsCoreKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol MadsCoreKtor_ioCloseable <MadsCoreKotlinAutoCloseable>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface MadsCoreKtor_client_coreHttpClient : MadsCoreBase <MadsCoreKotlinx_coroutines_coreCoroutineScope, MadsCoreKtor_ioCloseable>
- (instancetype)initWithEngine:(id<MadsCoreKtor_client_coreHttpClientEngine>)engine userConfig:(MadsCoreKtor_client_coreHttpClientConfig<MadsCoreKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (MadsCoreKtor_client_coreHttpClient *)configBlock:(void (^)(MadsCoreKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<MadsCoreKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MadsCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<MadsCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MadsCoreKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) MadsCoreKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) MadsCoreKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) MadsCoreKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) MadsCoreKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) MadsCoreKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) MadsCoreKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface MadsCoreKtor_client_coreHttpClientEngineConfig : MadsCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property MadsCoreKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property MadsCoreKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface MadsCoreKtor_client_coreHttpClientConfig<T> : MadsCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MadsCoreKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(MadsCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<MadsCoreKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(MadsCoreKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(MadsCoreKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol MadsCoreKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(MadsCoreKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) MadsCoreKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Ktor_client_coreClientPlugin")))
@protocol MadsCoreKtor_client_coreClientPlugin <MadsCoreKtor_client_coreHttpClientPlugin>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mads_gatewayGatewayApi")))
@interface MadsCoreMads_gatewayGatewayApi : MadsCoreBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getModalsPadId:(NSString *)padId debugCreative:(BOOL)debugCreative targetings:(NSDictionary<NSString *, NSString *> *)targetings completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getModals(padId:debugCreative:targetings:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)publishEventPadId:(NSString *)padId eventName:(NSString *)eventName occurredAt:(int64_t)occurredAt completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("publishEvent(padId:eventName:occurredAt:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MadsCoreKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MadsCoreKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MadsCoreKotlinCoroutineContextElement> _Nullable)getKey:(id<MadsCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MadsCoreKotlinCoroutineContext>)minusKeyKey:(id<MadsCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MadsCoreKotlinCoroutineContext>)plusContext:(id<MadsCoreKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MadsCoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol MadsCoreKtor_client_coreHttpClientEngine <MadsCoreKotlinx_coroutines_coreCoroutineScope, MadsCoreKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(MadsCoreKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(MadsCoreKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(MadsCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) MadsCoreKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) MadsCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<MadsCoreKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol MadsCoreKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol MadsCoreKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(MadsCoreKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(MadsCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(MadsCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(MadsCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(MadsCoreKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(MadsCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (void)setKey:(MadsCoreKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (id)takeKey:(MadsCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(MadsCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<MadsCoreKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface MadsCoreKtor_eventsEvents : MadsCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(MadsCoreKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<MadsCoreKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(MadsCoreKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(MadsCoreKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface MadsCoreKtor_utilsPipeline<TSubject, TContext> : MadsCoreBase
- (instancetype)initWithPhases:(MadsCoreKotlinArray<MadsCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MadsCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MadsCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(MadsCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(MadsCoreKtor_utilsPipelinePhase *)reference phase:(MadsCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(MadsCoreKtor_utilsPipelinePhase *)reference phase:(MadsCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(MadsCoreKtor_utilsPipelinePhase *)phase block:(id<MadsCoreKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<MadsCoreKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(MadsCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(MadsCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(MadsCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(MadsCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MadsCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<MadsCoreKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface MadsCoreKtor_client_coreHttpReceivePipeline : MadsCoreKtor_utilsPipeline<MadsCoreKtor_client_coreHttpResponse *, MadsCoreKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MadsCoreKotlinArray<MadsCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MadsCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MadsCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MadsCoreKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface MadsCoreKtor_client_coreHttpRequestPipeline : MadsCoreKtor_utilsPipeline<id, MadsCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MadsCoreKotlinArray<MadsCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MadsCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MadsCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MadsCoreKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface MadsCoreKtor_client_coreHttpResponsePipeline : MadsCoreKtor_utilsPipeline<MadsCoreKtor_client_coreHttpResponseContainer *, MadsCoreKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MadsCoreKotlinArray<MadsCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MadsCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MadsCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MadsCoreKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface MadsCoreKtor_client_coreHttpSendPipeline : MadsCoreKtor_utilsPipeline<id, MadsCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MadsCoreKotlinArray<MadsCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MadsCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MadsCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MadsCoreKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MadsCoreKotlinCoroutineContextElement <MadsCoreKotlinCoroutineContext>
@required
@property (readonly) id<MadsCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface MadsCoreKotlinAbstractCoroutineContextElement : MadsCoreBase <MadsCoreKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<MadsCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MadsCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol MadsCoreKotlinContinuationInterceptor <MadsCoreKotlinCoroutineContextElement>
@required
- (id<MadsCoreKotlinContinuation>)interceptContinuationContinuation:(id<MadsCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<MadsCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface MadsCoreKotlinx_coroutines_coreCoroutineDispatcher : MadsCoreKotlinAbstractCoroutineContextElement <MadsCoreKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<MadsCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MadsCoreKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<MadsCoreKotlinCoroutineContext>)context block:(id<MadsCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<MadsCoreKotlinCoroutineContext>)context block:(id<MadsCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<MadsCoreKotlinContinuation>)interceptContinuationContinuation:(id<MadsCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<MadsCoreKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (MadsCoreKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (MadsCoreKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(MadsCoreKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<MadsCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface MadsCoreKtor_client_coreProxyConfig : MadsCoreBase
- (instancetype)initWithUrl:(MadsCoreKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MadsCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface MadsCoreKtor_utilsAttributeKey<T> : MadsCoreBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(MadsCoreKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (MadsCoreKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(MadsCoreKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MadsCoreKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface MadsCoreKtor_client_coreHttpRequestData : MadsCoreBase
- (instancetype)initWithUrl:(MadsCoreKtor_httpUrl *)url method:(MadsCoreKtor_httpHttpMethod *)method headers:(id<MadsCoreKtor_httpHeaders>)headers body:(MadsCoreKtor_httpOutgoingContent *)body executionContext:(id<MadsCoreKotlinx_coroutines_coreJob>)executionContext attributes:(id<MadsCoreKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<MadsCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MadsCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MadsCoreKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<MadsCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<MadsCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MadsCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MadsCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface MadsCoreKtor_client_coreHttpResponseData : MadsCoreBase
- (instancetype)initWithStatusCode:(MadsCoreKtor_httpHttpStatusCode *)statusCode requestTime:(MadsCoreKtor_utilsGMTDate *)requestTime headers:(id<MadsCoreKtor_httpHeaders>)headers version:(MadsCoreKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<MadsCoreKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<MadsCoreKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<MadsCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MadsCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) MadsCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) MadsCoreKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface MadsCoreKtor_eventsEventDefinition<T> : MadsCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol MadsCoreKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface MadsCoreKtor_utilsPipelinePhase : MadsCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol MadsCoreKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol MadsCoreKotlinSuspendFunction2 <MadsCoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface MadsCoreKtor_client_coreHttpReceivePipelinePhases : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol MadsCoreKtor_httpHttpMessage
@required
@property (readonly) id<MadsCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface MadsCoreKtor_client_coreHttpResponse : MadsCoreBase <MadsCoreKtor_httpHttpMessage, MadsCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MadsCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<MadsCoreKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) MadsCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) MadsCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) MadsCoreKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MadsCoreKotlinUnit : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface MadsCoreKtor_client_coreHttpRequestPipelinePhases : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol MadsCoreKtor_httpHttpMessageBuilder
@required
@property (readonly) MadsCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface MadsCoreKtor_client_coreHttpRequestBuilder : MadsCoreBase <MadsCoreKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MadsCoreKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (MadsCoreKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<MadsCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<MadsCoreKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<MadsCoreKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (MadsCoreKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(MadsCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (MadsCoreKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(MadsCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(MadsCoreKtor_httpURLBuilder *, MadsCoreKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<MadsCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property MadsCoreKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<MadsCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) MadsCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property MadsCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MadsCoreKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface MadsCoreKtor_client_coreHttpResponsePipelinePhases : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface MadsCoreKtor_client_coreHttpResponseContainer : MadsCoreBase
- (instancetype)initWithExpectedType:(MadsCoreKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (MadsCoreKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(MadsCoreKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MadsCoreKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface MadsCoreKtor_client_coreHttpClientCall : MadsCoreBase <MadsCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(MadsCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(MadsCoreKtor_client_coreHttpClient *)client requestData:(MadsCoreKtor_client_coreHttpRequestData *)requestData responseData:(MadsCoreKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MadsCoreKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(MadsCoreKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(MadsCoreKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<MadsCoreKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<MadsCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MadsCoreKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<MadsCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<MadsCoreKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property MadsCoreKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface MadsCoreKtor_client_coreHttpSendPipelinePhases : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) MadsCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol MadsCoreKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<MadsCoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface MadsCoreKotlinAbstractCoroutineContextKey<B, E> : MadsCoreBase <MadsCoreKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<MadsCoreKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<MadsCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface MadsCoreKotlinx_coroutines_coreCoroutineDispatcherKey : MadsCoreKotlinAbstractCoroutineContextKey<id<MadsCoreKotlinContinuationInterceptor>, MadsCoreKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<MadsCoreKotlinCoroutineContextKey>)baseKey safeCast:(id<MadsCoreKotlinCoroutineContextElement> _Nullable (^)(id<MadsCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol MadsCoreKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol MadsCoreKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface MadsCoreKtor_httpUrl : MadsCoreBase <MadsCoreKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) MadsCoreKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<MadsCoreKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) MadsCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) MadsCoreKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface MadsCoreKtor_utilsTypeInfo : MadsCoreBase
- (instancetype)initWithType:(id<MadsCoreKotlinKClass>)type kotlinType:(id<MadsCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<MadsCoreKotlinKClass>)type reifiedType:(id<MadsCoreKotlinKType>)reifiedType kotlinType:(id<MadsCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MadsCoreKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<MadsCoreKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface MadsCoreKtor_httpHttpMethod : MadsCoreBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MadsCoreKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (MadsCoreKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol MadsCoreKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MadsCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol MadsCoreKtor_httpHeaders <MadsCoreKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface MadsCoreKtor_httpOutgoingContent : MadsCoreBase
- (id _Nullable)getPropertyKey:(MadsCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(MadsCoreKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<MadsCoreKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) MadsCoreLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) MadsCoreKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<MadsCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol MadsCoreKotlinx_coroutines_coreJob <MadsCoreKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<MadsCoreKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<MadsCoreKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(MadsCoreKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (MadsCoreKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<MadsCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(MadsCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<MadsCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(MadsCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<MadsCoreKotlinx_coroutines_coreJob>)plusOther_:(id<MadsCoreKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<MadsCoreKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<MadsCoreKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<MadsCoreKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface MadsCoreKtor_httpHttpStatusCode : MadsCoreBase <MadsCoreKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MadsCoreKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MadsCoreKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (MadsCoreKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (MadsCoreKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface MadsCoreKtor_utilsGMTDate : MadsCoreBase <MadsCoreKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(MadsCoreKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(MadsCoreKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MadsCoreKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MadsCoreKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (MadsCoreKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (MadsCoreKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(MadsCoreKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(MadsCoreKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) MadsCoreKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) MadsCoreKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface MadsCoreKtor_httpHttpProtocolVersion : MadsCoreBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MadsCoreKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (MadsCoreKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol MadsCoreKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(MadsCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause_:(MadsCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
@property (readonly) MadsCoreKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<MadsCoreKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol MadsCoreKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<MadsCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<MadsCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<MadsCoreKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MadsCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface MadsCoreKtor_utilsStringValuesBuilderImpl : MadsCoreBase <MadsCoreKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<MadsCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<MadsCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<MadsCoreKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MadsCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) MadsCoreMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface MadsCoreKtor_httpHeadersBuilder : MadsCoreKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MadsCoreKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface MadsCoreKtor_client_coreHttpRequestBuilderCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface MadsCoreKtor_httpURLBuilder : MadsCoreBase
- (instancetype)initWithProtocol:(MadsCoreKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<MadsCoreKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MadsCoreKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (MadsCoreKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<MadsCoreKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<MadsCoreKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property MadsCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property MadsCoreKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface MadsCoreKtor_client_coreHttpClientCallCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol MadsCoreKtor_client_coreHttpRequest <MadsCoreKtor_httpHttpMessage, MadsCoreKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<MadsCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MadsCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) MadsCoreKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) MadsCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MadsCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface MadsCoreKtor_httpUrlCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<MadsCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol MadsCoreKtor_httpParameters <MadsCoreKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface MadsCoreKtor_httpURLProtocol : MadsCoreBase <MadsCoreKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MadsCoreKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (MadsCoreKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MadsCoreKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MadsCoreKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MadsCoreKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MadsCoreKotlinKClass <MadsCoreKotlinKDeclarationContainer, MadsCoreKotlinKAnnotatedElement, MadsCoreKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol MadsCoreKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<MadsCoreKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<MadsCoreKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface MadsCoreKtor_httpHttpMethodCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (MadsCoreKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<MadsCoreKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) MadsCoreKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) MadsCoreKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) MadsCoreKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) MadsCoreKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) MadsCoreKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) MadsCoreKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) MadsCoreKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol MadsCoreKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface MadsCoreKtor_httpHeaderValueWithParameters : MadsCoreBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<MadsCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MadsCoreKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<MadsCoreKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface MadsCoreKtor_httpContentType : MadsCoreKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<MadsCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<MadsCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MadsCoreKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(MadsCoreKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (MadsCoreKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (MadsCoreKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol MadsCoreKotlinx_coroutines_coreChildHandle <MadsCoreKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(MadsCoreKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<MadsCoreKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol MadsCoreKotlinx_coroutines_coreChildJob <MadsCoreKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<MadsCoreKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol MadsCoreKotlinSequence
@required
- (id<MadsCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol MadsCoreKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) MadsCoreKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<MadsCoreKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(MadsCoreKotlinThrowable *, id _Nullable, id<MadsCoreKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<MadsCoreKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol MadsCoreKotlinx_coroutines_coreSelectClause0 <MadsCoreKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface MadsCoreKtor_httpHttpStatusCodeCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (MadsCoreKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) MadsCoreKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<MadsCoreKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface MadsCoreKtor_utilsWeekDay : MadsCoreKotlinEnum<MadsCoreKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MadsCoreKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MadsCoreKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) MadsCoreKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) MadsCoreKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) MadsCoreKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) MadsCoreKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) MadsCoreKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) MadsCoreKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (MadsCoreKotlinArray<MadsCoreKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MadsCoreKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface MadsCoreKtor_utilsMonth : MadsCoreKotlinEnum<MadsCoreKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MadsCoreKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MadsCoreKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) MadsCoreKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) MadsCoreKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) MadsCoreKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) MadsCoreKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) MadsCoreKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) MadsCoreKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) MadsCoreKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) MadsCoreKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) MadsCoreKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) MadsCoreKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) MadsCoreKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (MadsCoreKotlinArray<MadsCoreKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MadsCoreKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface MadsCoreKtor_utilsGMTDateCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<MadsCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) MadsCoreKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface MadsCoreKtor_httpHttpProtocolVersionCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (MadsCoreKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (MadsCoreKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) MadsCoreKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) MadsCoreKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) MadsCoreKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) MadsCoreKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) MadsCoreKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol MadsCoreKotlinx_io_coreRawSource <MadsCoreKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(MadsCoreKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol MadsCoreKotlinx_io_coreSource <MadsCoreKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<MadsCoreKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(MadsCoreKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<MadsCoreKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<MadsCoreKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) MadsCoreKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface MadsCoreKtor_httpURLBuilderCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol MadsCoreKtor_httpParametersBuilder <MadsCoreKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MadsCoreKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MadsCoreKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MadsCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MadsCoreKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MadsCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MadsCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MadsCoreKotlinx_serialization_coreKSerializer <MadsCoreKotlinx_serialization_coreSerializationStrategy, MadsCoreKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface MadsCoreKtor_httpURLProtocolCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (MadsCoreKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) MadsCoreKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) MadsCoreKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) MadsCoreKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) MadsCoreKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) MadsCoreKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, MadsCoreKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface MadsCoreKotlinKTypeProjection : MadsCoreBase
- (instancetype)initWithVariance:(MadsCoreKotlinKVariance * _Nullable)variance type:(id<MadsCoreKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MadsCoreKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (MadsCoreKotlinKTypeProjection *)doCopyVariance:(MadsCoreKotlinKVariance * _Nullable)variance type:(id<MadsCoreKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MadsCoreKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) MadsCoreKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface MadsCoreKtor_httpHeaderValueParam : MadsCoreBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (MadsCoreKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface MadsCoreKtor_httpHeaderValueWithParametersCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<MadsCoreKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface MadsCoreKtor_httpContentTypeCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (MadsCoreKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) MadsCoreKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol MadsCoreKotlinx_coroutines_coreParentJob <MadsCoreKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (MadsCoreKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol MadsCoreKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<MadsCoreKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<MadsCoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface MadsCoreKtor_utilsWeekDayCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (MadsCoreKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (MadsCoreKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface MadsCoreKtor_utilsMonthCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (MadsCoreKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (MadsCoreKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MadsCoreKotlinByteArray : MadsCoreBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MadsCoreByte *(^)(MadsCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MadsCoreKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol MadsCoreKotlinx_io_coreRawSink <MadsCoreKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(MadsCoreKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol MadsCoreKotlinx_io_coreSink <MadsCoreKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<MadsCoreKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<MadsCoreKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(MadsCoreKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) MadsCoreKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface MadsCoreKotlinx_io_coreBuffer : MadsCoreBase <MadsCoreKotlinx_io_coreSource, MadsCoreKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (MadsCoreKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(MadsCoreKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<MadsCoreKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(MadsCoreKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(MadsCoreKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<MadsCoreKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<MadsCoreKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<MadsCoreKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(MadsCoreKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<MadsCoreKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(MadsCoreKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) MadsCoreKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MadsCoreKotlinx_serialization_coreEncoder
@required
- (id<MadsCoreKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MadsCoreKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MadsCoreKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MadsCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MadsCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MadsCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MadsCoreKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<MadsCoreKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<MadsCoreKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MadsCoreKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MadsCoreKotlinx_serialization_coreDecoder
@required
- (id<MadsCoreKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MadsCoreKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MadsCoreKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MadsCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MadsCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MadsCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface MadsCoreKotlinKVariance : MadsCoreKotlinEnum<MadsCoreKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MadsCoreKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) MadsCoreKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) MadsCoreKotlinKVariance *out __attribute__((swift_name("out")));
+ (MadsCoreKotlinArray<MadsCoreKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MadsCoreKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface MadsCoreKotlinKTypeProjectionCompanion : MadsCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MadsCoreKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MadsCoreKotlinKTypeProjection *)contravariantType:(id<MadsCoreKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MadsCoreKotlinKTypeProjection *)covariantType:(id<MadsCoreKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MadsCoreKotlinKTypeProjection *)invariantType:(id<MadsCoreKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) MadsCoreKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface MadsCoreKotlinByteIterator : MadsCoreBase <MadsCoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MadsCoreByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MadsCoreKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MadsCoreKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MadsCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MadsCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MadsCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MadsCoreKotlinx_serialization_coreSerializersModule : MadsCoreBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MadsCoreKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MadsCoreKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MadsCoreKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MadsCoreKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MadsCoreKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MadsCoreKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MadsCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MadsCoreKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MadsCoreKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MadsCoreKotlinx_serialization_coreSerialKind : MadsCoreBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MadsCoreKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MadsCoreKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MadsCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MadsCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MadsCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MadsCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MadsCoreKotlinNothing : MadsCoreBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MadsCoreKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MadsCoreKotlinKClass>)kClass provider:(id<MadsCoreKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MadsCoreKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MadsCoreKotlinKClass>)kClass serializer:(id<MadsCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MadsCoreKotlinKClass>)baseClass actualClass:(id<MadsCoreKotlinKClass>)actualClass actualSerializer:(id<MadsCoreKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MadsCoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<MadsCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MadsCoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<MadsCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MadsCoreKotlinKClass>)baseClass defaultSerializerProvider:(id<MadsCoreKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
