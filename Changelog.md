# RFKit Changelog

## 2.0

* Highlighted enhancements:
  * Better Swift support. APIs now have delight and clean names. Closure are flagged no escape when necessary. Methods are defined as properties when necessary.
* **Breaking Changes:**
  * All deprecated code is removed, which includes:
    * `RF_NOESCAPE`, `RF_WARN_UNUSED_RESULT`.
    * UncaughtExceptionHandler.
    * RFPerformance time methods.
    * Some methods in categories.
  * Many APIs had renamed in Swift.
  * Xcode 7 support dropped.
* API Enhancements:
  * RFGeometry, add `UIEdgeInsetsMakeWithSameMargin` and `UIEdgeInsetsReverse`.
  * RFRuntime, make some UI types available on a macOS target.
  * dout, geometry methods now can print variable struct not just the CG or NS type.
  * NSDictionary+RFKit, add `addEntriesFromDictionary:filterKeys:` as withSpecifiedKeys version is unavailable in Swift.
  * UIView+RFKit, add `UIViewAutoresizingFlexibleSize` and `UIViewAutoresizingFlexibleMargin`.
* Bug fixes:
  * RFDispatch, fix wrong available version.
  * RFFoundation, fix TARGET_OS_OSX define on watchOS target.
  * NSDictionary+RFKit, fix type define. Fix `addEntriesFromDictionary:withSpecifiedKeys:` return wrong number if there are duplicate keys.
* Project:
  * Now have a Swift test.
  * Move doc to wiki.
  * CI with matrix.