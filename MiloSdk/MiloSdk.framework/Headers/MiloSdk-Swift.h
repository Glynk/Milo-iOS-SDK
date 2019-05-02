// Generated by Apple Swift version 4.2.1 effective-4.1.50 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import SafariServices;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MiloSdk",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class UIColor;
@class NSAttributedString;
@class UIFont;
@class NSCoder;
@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC7MiloSdk11ActiveLabel")
@interface ActiveLabel : UILabel
@property (nonatomic, strong) UIColor * _Nonnull mentionColor;
@property (nonatomic, strong) UIColor * _Nullable mentionSelectedColor;
@property (nonatomic, strong) UIColor * _Nonnull hashtagColor;
@property (nonatomic, strong) UIColor * _Nullable hashtagSelectedColor;
@property (nonatomic, strong) UIColor * _Nonnull URLColor;
@property (nonatomic, strong) UIColor * _Nullable URLSelectedColor;
@property (nonatomic) CGFloat lineSpacing;
@property (nonatomic) CGFloat minimumLineHeight;
@property (nonatomic, copy) NSString * _Nullable highlightFontName;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, strong) NSAttributedString * _Nullable attributedText;
@property (nonatomic, strong) UIFont * _Null_unspecified font;
@property (nonatomic, strong) UIColor * _Null_unspecified textColor;
@property (nonatomic) NSTextAlignment textAlignment;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) NSLineBreakMode lineBreakMode;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
- (void)drawTextInRect:(CGRect)rect;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end

@class UIGestureRecognizer;

@interface ActiveLabel (SWIFT_EXTENSION(MiloSdk)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end




SWIFT_CLASS("_TtC7MiloSdk14DottedLineView")
@interface DottedLineView : UIView
@property (nonatomic, strong) UIColor * _Nonnull lineColor;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) BOOL round;
@property (nonatomic) BOOL horizontal;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)prepareForInterfaceBuilder;
- (void)drawRect:(CGRect)rect;
@end


/// FTImageView
SWIFT_CLASS("_TtC7MiloSdk11FTImageView")
@interface FTImageView : UIScrollView <UIScrollViewDelegate>
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView SWIFT_WARN_UNUSED_RESULT;
- (void)scrollViewDidEndZooming:(UIScrollView * _Nonnull)scrollView withView:(UIView * _Nullable)view atScale:(CGFloat)scale;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC7MiloSdk14FTImageViewBar")
@interface FTImageViewBar : UIView
- (void)layoutIfNeeded;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7MiloSdk13FTImageViewer")
@interface FTImageViewer : NSObject <UIGestureRecognizerDelegate, UIScrollViewDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






SWIFT_CLASS("_TtC7MiloSdk17GlynkProgressView")
@interface GlynkProgressView : UIView
/// Initialize programmaticaly just like you would any other UIButton.
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end


SWIFT_CLASS("_TtC7MiloSdk19GlynkViewController")
@interface GlynkViewController : UIViewController
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillAppear:(BOOL)animated;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7MiloSdk23GlynkRootViewController")
@interface GlynkRootViewController : GlynkViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC7MiloSdk10MiloButton")
@interface MiloButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
@end









@class NSTextContainer;
@class UITextPosition;

/// A light-weight UITextView subclass that adds support for placeholder.
SWIFT_CLASS("_TtC7MiloSdk22RSKPlaceholderTextView")
@interface RSKPlaceholderTextView : UITextView
/// The string that is displayed when there is no other text in the placeholder text view. This value is <code>nil</code> by default.
@property (nonatomic, copy) NSString * _Nullable placeholder;
/// The color of the placeholder. This property applies to the entire placeholder string. The default placeholder color is <code>UIColor(red: 0.6, green: 0.6, blue: 0.6, alpha: 1.0)</code>.
@property (nonatomic, strong) UIColor * _Nonnull placeholderColor;
@property (nonatomic, strong) NSAttributedString * _Null_unspecified attributedText;
@property (nonatomic) CGRect bounds;
@property (nonatomic) UIEdgeInsets contentInset;
@property (nonatomic, strong) UIFont * _Nullable font;
@property (nonatomic) NSTextAlignment textAlignment;
@property (nonatomic) UIEdgeInsets textContainerInset;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull typingAttributes;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame textContainer:(NSTextContainer * _Nullable)textContainer OBJC_DESIGNATED_INITIALIZER;
- (CGRect)caretRectForPosition:(UITextPosition * _Nonnull)position SWIFT_WARN_UNUSED_RESULT;
- (void)drawRect:(CGRect)rect;
@end


/// A light-weight UITextView subclass that automatically grows and shrinks based on the size of user input and can be constrained by maximum and minimum number of lines.
SWIFT_CLASS("_TtC7MiloSdk18RSKGrowingTextView")
@interface RSKGrowingTextView : RSKPlaceholderTextView
/// A Boolean value that determines whether the animation of the height change is enabled. Default value is <code>true</code>.
@property (nonatomic) BOOL animateHeightChange;
/// The duration of the animation of the height change. The default value is <code>0.35</code>.
@property (nonatomic) double heightChangeAnimationDuration;
/// The maximum number of lines before enabling scrolling. The default value is <code>5</code>.
@property (nonatomic) NSInteger maximumNumberOfLines;
/// The minimum number of lines. The default value is <code>1</code>.
@property (nonatomic) NSInteger minimumNumberOfLines;
@property (nonatomic, strong) NSAttributedString * _Null_unspecified attributedText;
@property (nonatomic) CGSize contentSize;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame textContainer:(NSTextContainer * _Nullable)textContainer OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@end


/// The <code>RSKGrowingTextViewDelegate</code> protocol extends the <code>UITextViewDelegate</code> protocol by providing a set of optional methods you can use to receive messages related to the change of the height of <code>RSKGrowingTextView</code> objects.
SWIFT_PROTOCOL("_TtP7MiloSdk26RSKGrowingTextViewDelegate_")
@protocol RSKGrowingTextViewDelegate <UITextViewDelegate>
@optional
/// Tells the delegate that the growing text view did change height.
/// \param textView The growing text view object that has changed the height.
///
/// \param growingTextViewHeightBegin CGFloat that identifies the start height of the growing text view.
///
/// \param growingTextViewHeightEnd CGFloat that identifies the end height of the growing text view.
///
- (void)growingTextView:(RSKGrowingTextView * _Nonnull)textView didChangeHeightFrom:(CGFloat)growingTextViewHeightBegin to:(CGFloat)growingTextViewHeightEnd;
/// Tells the delegate that the growing text view will change height.
/// \param textView The growing text view object that will change the height.
///
/// \param growingTextViewHeightBegin CGFloat that identifies the start height of the growing text view.
///
/// \param growingTextViewHeightEnd CGFloat that identifies the end height of the growing text view.
///
- (void)growingTextView:(RSKGrowingTextView * _Nonnull)textView willChangeHeightFrom:(CGFloat)growingTextViewHeightBegin to:(CGFloat)growingTextViewHeightEnd;
@end



@interface SFSafariViewController (SWIFT_EXTENSION(MiloSdk))
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
@end








@interface UIColor (SWIFT_EXTENSION(MiloSdk))
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@property (nonatomic, readonly, copy) NSString * _Nonnull debugDescription;
@end




















@interface UILabel (SWIFT_EXTENSION(MiloSdk))
/// The name of a style in the global <code>NamedStyles</code> registry.
@property (nonatomic, copy) NSString * _Nullable styleName;
@end




@interface UINavigationController (SWIFT_EXTENSION(MiloSdk))
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
@end








@interface UITextField (SWIFT_EXTENSION(MiloSdk))
@property (nonatomic) CGFloat leftSpacer;
@property (nonatomic) CGFloat rightSpacer;
@end


@interface UITextField (SWIFT_EXTENSION(MiloSdk))
/// The name of a style in the global <code>NamedStyles</code> registry.
@property (nonatomic, copy) NSString * _Nullable styleName;
@end




@interface UITextView (SWIFT_EXTENSION(MiloSdk))
/// The name of a style in the global <code>NamedStyles</code> registry.
@property (nonatomic, copy) NSString * _Nullable styleName;
@end





@class UITapGestureRecognizer;
@class NSTimer;

@interface UIView (SWIFT_EXTENSION(MiloSdk))
- (void)handleToastTapped:(UITapGestureRecognizer * _Nonnull)recognizer;
- (void)toastTimerDidFinish:(NSTimer * _Nonnull)timer;
@end







#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
