/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityLoader : NSObject

+ (void)__loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 loadSubbundles:(BOOL)arg3;
+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (void)_accessibilityInitializeRuntimeOverrides;
+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (void)_accessibilityLoadExtendedBundles;
+ (void)_accessibilityLoadSubbundles:(id)arg1;
+ (void)_accessibilityReenabled;
+ (BOOL)_accessibilityServerStarted;
+ (void)_accessibilityStartMiniServer;
+ (void)_accessibilityStartServer;
+ (void)_accessibilityStopServer;
+ (BOOL)_accessibilityUIKitBundleLoaded;
+ (void)_applicationAccessibilityListener:(id)arg1;
+ (id)_axBundleForBundle:(id)arg1;
+ (void)_loadAXBundleForBundle:(id)arg1 didLoadCallback:(id /* block */)arg2;
+ (void)_loadAXBundleForBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 forceLoad:(BOOL)arg3 loadSubbundles:(BOOL)arg4 loadAllAccessibilityInfo:(BOOL)arg5;
+ (void)_stringLocalizationStarted:(id)arg1;
+ (void)initialize;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 force:(BOOL)arg3;
+ (void)loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 loadSubbundles:(BOOL)arg3;

@end