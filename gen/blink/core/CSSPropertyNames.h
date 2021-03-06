
// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CSSPropertyNames_h
#define CSSPropertyNames_h

#include "core/css/parser/CSSParserMode.h"
#include "wtf/HashFunctions.h"
#include "wtf/HashTraits.h"
#include <string.h>

namespace WTF {
class AtomicString;
class String;
}

namespace blink {

enum CSSPropertyID {
    CSSPropertyInvalid = 0,
    CSSPropertyColor = 1,
    CSSPropertyDirection = 2,
    CSSPropertyFontFamily = 3,
    CSSPropertyFontKerning = 4,
    CSSPropertyFontSize = 5,
    CSSPropertyFontSizeAdjust = 6,
    CSSPropertyFontStretch = 7,
    CSSPropertyFontStyle = 8,
    CSSPropertyFontVariant = 9,
    CSSPropertyFontVariantLigatures = 10,
    CSSPropertyFontWeight = 11,
    CSSPropertyWebkitFontFeatureSettings = 12,
    CSSPropertyWebkitFontSmoothing = 13,
    CSSPropertyWebkitLocale = 14,
    CSSPropertyWebkitTextOrientation = 15,
    CSSPropertyWebkitWritingMode = 16,
    CSSPropertyTextRendering = 17,
    CSSPropertyZoom = 18,
    CSSPropertyAlignContent = 19,
    CSSPropertyAlignItems = 20,
    CSSPropertyAlignmentBaseline = 21,
    CSSPropertyAlignSelf = 22,
    CSSPropertyAnimationDelay = 23,
    CSSPropertyAnimationDirection = 24,
    CSSPropertyAnimationDuration = 25,
    CSSPropertyAnimationFillMode = 26,
    CSSPropertyAnimationIterationCount = 27,
    CSSPropertyAnimationName = 28,
    CSSPropertyAnimationPlayState = 29,
    CSSPropertyAnimationTimingFunction = 30,
    CSSPropertyBackfaceVisibility = 31,
    CSSPropertyBackgroundAttachment = 32,
    CSSPropertyBackgroundBlendMode = 33,
    CSSPropertyBackgroundClip = 34,
    CSSPropertyBackgroundColor = 35,
    CSSPropertyBackgroundImage = 36,
    CSSPropertyBackgroundOrigin = 37,
    CSSPropertyBackgroundPositionX = 38,
    CSSPropertyBackgroundPositionY = 39,
    CSSPropertyBackgroundRepeatX = 40,
    CSSPropertyBackgroundRepeatY = 41,
    CSSPropertyBackgroundSize = 42,
    CSSPropertyBaselineShift = 43,
    CSSPropertyBorderBottomColor = 44,
    CSSPropertyBorderBottomLeftRadius = 45,
    CSSPropertyBorderBottomRightRadius = 46,
    CSSPropertyBorderBottomStyle = 47,
    CSSPropertyBorderBottomWidth = 48,
    CSSPropertyBorderCollapse = 49,
    CSSPropertyBorderImageOutset = 50,
    CSSPropertyBorderImageRepeat = 51,
    CSSPropertyBorderImageSlice = 52,
    CSSPropertyBorderImageSource = 53,
    CSSPropertyBorderImageWidth = 54,
    CSSPropertyBorderLeftColor = 55,
    CSSPropertyBorderLeftStyle = 56,
    CSSPropertyBorderLeftWidth = 57,
    CSSPropertyBorderRightColor = 58,
    CSSPropertyBorderRightStyle = 59,
    CSSPropertyBorderRightWidth = 60,
    CSSPropertyBorderTopColor = 61,
    CSSPropertyBorderTopLeftRadius = 62,
    CSSPropertyBorderTopRightRadius = 63,
    CSSPropertyBorderTopStyle = 64,
    CSSPropertyBorderTopWidth = 65,
    CSSPropertyBottom = 66,
    CSSPropertyBoxShadow = 67,
    CSSPropertyBoxSizing = 68,
    CSSPropertyBufferedRendering = 69,
    CSSPropertyCaptionSide = 70,
    CSSPropertyClear = 71,
    CSSPropertyClip = 72,
    CSSPropertyClipPath = 73,
    CSSPropertyClipRule = 74,
    CSSPropertyColorInterpolation = 75,
    CSSPropertyColorInterpolationFilters = 76,
    CSSPropertyColorRendering = 77,
    CSSPropertyColumnFill = 78,
    CSSPropertyContent = 79,
    CSSPropertyCounterIncrement = 80,
    CSSPropertyCounterReset = 81,
    CSSPropertyCursor = 82,
    CSSPropertyCx = 83,
    CSSPropertyCy = 84,
    CSSPropertyDisplay = 85,
    CSSPropertyDominantBaseline = 86,
    CSSPropertyEmptyCells = 87,
    CSSPropertyFill = 88,
    CSSPropertyFillOpacity = 89,
    CSSPropertyFillRule = 90,
    CSSPropertyFilter = 91,
    CSSPropertyFlexBasis = 92,
    CSSPropertyFlexDirection = 93,
    CSSPropertyFlexGrow = 94,
    CSSPropertyFlexShrink = 95,
    CSSPropertyFlexWrap = 96,
    CSSPropertyFloat = 97,
    CSSPropertyFloodColor = 98,
    CSSPropertyFloodOpacity = 99,
    CSSPropertyGlyphOrientationHorizontal = 100,
    CSSPropertyGlyphOrientationVertical = 101,
    CSSPropertyGridAutoColumns = 102,
    CSSPropertyGridAutoFlow = 103,
    CSSPropertyGridAutoRows = 104,
    CSSPropertyGridColumnEnd = 105,
    CSSPropertyGridColumnStart = 106,
    CSSPropertyGridRowEnd = 107,
    CSSPropertyGridRowStart = 108,
    CSSPropertyGridTemplateAreas = 109,
    CSSPropertyGridTemplateColumns = 110,
    CSSPropertyGridTemplateRows = 111,
    CSSPropertyHeight = 112,
    CSSPropertyImageRendering = 113,
    CSSPropertyIsolation = 114,
    CSSPropertyJustifyContent = 115,
    CSSPropertyJustifyItems = 116,
    CSSPropertyJustifySelf = 117,
    CSSPropertyLeft = 118,
    CSSPropertyLetterSpacing = 119,
    CSSPropertyLightingColor = 120,
    CSSPropertyLineHeight = 121,
    CSSPropertyListStyleImage = 122,
    CSSPropertyListStylePosition = 123,
    CSSPropertyListStyleType = 124,
    CSSPropertyMarginBottom = 125,
    CSSPropertyMarginLeft = 126,
    CSSPropertyMarginRight = 127,
    CSSPropertyMarginTop = 128,
    CSSPropertyMarkerEnd = 129,
    CSSPropertyMarkerMid = 130,
    CSSPropertyMarkerStart = 131,
    CSSPropertyMask = 132,
    CSSPropertyMaskSourceType = 133,
    CSSPropertyMaskType = 134,
    CSSPropertyMaxHeight = 135,
    CSSPropertyMaxWidth = 136,
    CSSPropertyMinHeight = 137,
    CSSPropertyMinWidth = 138,
    CSSPropertyMixBlendMode = 139,
    CSSPropertyMotionOffset = 140,
    CSSPropertyMotionPath = 141,
    CSSPropertyMotionRotation = 142,
    CSSPropertyObjectFit = 143,
    CSSPropertyObjectPosition = 144,
    CSSPropertyOpacity = 145,
    CSSPropertyOrder = 146,
    CSSPropertyOrphans = 147,
    CSSPropertyOutlineColor = 148,
    CSSPropertyOutlineOffset = 149,
    CSSPropertyOutlineStyle = 150,
    CSSPropertyOutlineWidth = 151,
    CSSPropertyOverflowWrap = 152,
    CSSPropertyOverflowX = 153,
    CSSPropertyOverflowY = 154,
    CSSPropertyPaddingBottom = 155,
    CSSPropertyPaddingLeft = 156,
    CSSPropertyPaddingRight = 157,
    CSSPropertyPaddingTop = 158,
    CSSPropertyPageBreakAfter = 159,
    CSSPropertyPageBreakBefore = 160,
    CSSPropertyPageBreakInside = 161,
    CSSPropertyPaintOrder = 162,
    CSSPropertyPerspective = 163,
    CSSPropertyPerspectiveOrigin = 164,
    CSSPropertyPointerEvents = 165,
    CSSPropertyPosition = 166,
    CSSPropertyQuotes = 167,
    CSSPropertyResize = 168,
    CSSPropertyRight = 169,
    CSSPropertyR = 170,
    CSSPropertyRx = 171,
    CSSPropertyRy = 172,
    CSSPropertyScrollBehavior = 173,
    CSSPropertyScrollBlocksOn = 174,
    CSSPropertyScrollSnapType = 175,
    CSSPropertyScrollSnapPointsX = 176,
    CSSPropertyScrollSnapPointsY = 177,
    CSSPropertyScrollSnapDestination = 178,
    CSSPropertyScrollSnapCoordinate = 179,
    CSSPropertyShapeImageThreshold = 180,
    CSSPropertyShapeMargin = 181,
    CSSPropertyShapeOutside = 182,
    CSSPropertyShapeRendering = 183,
    CSSPropertySize = 184,
    CSSPropertySpeak = 185,
    CSSPropertyStopColor = 186,
    CSSPropertyStopOpacity = 187,
    CSSPropertyStroke = 188,
    CSSPropertyStrokeDasharray = 189,
    CSSPropertyStrokeDashoffset = 190,
    CSSPropertyStrokeLinecap = 191,
    CSSPropertyStrokeLinejoin = 192,
    CSSPropertyStrokeMiterlimit = 193,
    CSSPropertyStrokeOpacity = 194,
    CSSPropertyStrokeWidth = 195,
    CSSPropertyTableLayout = 196,
    CSSPropertyTabSize = 197,
    CSSPropertyTextAlign = 198,
    CSSPropertyTextAlignLast = 199,
    CSSPropertyTextAnchor = 200,
    CSSPropertyTextDecoration = 201,
    CSSPropertyTextDecorationColor = 202,
    CSSPropertyTextDecorationLine = 203,
    CSSPropertyTextDecorationStyle = 204,
    CSSPropertyTextIndent = 205,
    CSSPropertyTextJustify = 206,
    CSSPropertyTextOverflow = 207,
    CSSPropertyTextShadow = 208,
    CSSPropertyTextTransform = 209,
    CSSPropertyTextUnderlinePosition = 210,
    CSSPropertyTop = 211,
    CSSPropertyTouchAction = 212,
    CSSPropertyTransform = 213,
    CSSPropertyTransformOrigin = 214,
    CSSPropertyTransformStyle = 215,
    CSSPropertyTranslate = 216,
    CSSPropertyRotate = 217,
    CSSPropertyScale = 218,
    CSSPropertyTransitionDelay = 219,
    CSSPropertyTransitionDuration = 220,
    CSSPropertyTransitionProperty = 221,
    CSSPropertyTransitionTimingFunction = 222,
    CSSPropertyUnicodeBidi = 223,
    CSSPropertyVectorEffect = 224,
    CSSPropertyVerticalAlign = 225,
    CSSPropertyVisibility = 226,
    CSSPropertyX = 227,
    CSSPropertyY = 228,
    CSSPropertyWebkitAppearance = 229,
    CSSPropertyWebkitAppRegion = 230,
    CSSPropertyWebkitBackgroundClip = 231,
    CSSPropertyWebkitBackgroundComposite = 232,
    CSSPropertyWebkitBackgroundOrigin = 233,
    CSSPropertyWebkitBorderHorizontalSpacing = 234,
    CSSPropertyWebkitBorderImage = 235,
    CSSPropertyWebkitBorderVerticalSpacing = 236,
    CSSPropertyWebkitBoxAlign = 237,
    CSSPropertyWebkitBoxDecorationBreak = 238,
    CSSPropertyWebkitBoxDirection = 239,
    CSSPropertyWebkitBoxFlex = 240,
    CSSPropertyWebkitBoxFlexGroup = 241,
    CSSPropertyWebkitBoxLines = 242,
    CSSPropertyWebkitBoxOrdinalGroup = 243,
    CSSPropertyWebkitBoxOrient = 244,
    CSSPropertyWebkitBoxPack = 245,
    CSSPropertyWebkitBoxReflect = 246,
    CSSPropertyWebkitClipPath = 247,
    CSSPropertyWebkitColumnBreakAfter = 248,
    CSSPropertyWebkitColumnBreakBefore = 249,
    CSSPropertyWebkitColumnBreakInside = 250,
    CSSPropertyWebkitColumnCount = 251,
    CSSPropertyWebkitColumnGap = 252,
    CSSPropertyWebkitColumnRuleColor = 253,
    CSSPropertyWebkitColumnRuleStyle = 254,
    CSSPropertyWebkitColumnRuleWidth = 255,
    CSSPropertyWebkitColumnSpan = 256,
    CSSPropertyWebkitColumnWidth = 257,
    CSSPropertyWebkitFilter = 258,
    CSSPropertyWebkitHighlight = 259,
    CSSPropertyWebkitHyphenateCharacter = 260,
    CSSPropertyWebkitLineBoxContain = 261,
    CSSPropertyWebkitLineBreak = 262,
    CSSPropertyWebkitLineClamp = 263,
    CSSPropertyWebkitMarginAfterCollapse = 264,
    CSSPropertyWebkitMarginBeforeCollapse = 265,
    CSSPropertyWebkitMarginBottomCollapse = 266,
    CSSPropertyWebkitMarginTopCollapse = 267,
    CSSPropertyWebkitMaskBoxImageOutset = 268,
    CSSPropertyWebkitMaskBoxImageRepeat = 269,
    CSSPropertyWebkitMaskBoxImageSlice = 270,
    CSSPropertyWebkitMaskBoxImageSource = 271,
    CSSPropertyWebkitMaskBoxImageWidth = 272,
    CSSPropertyWebkitMaskClip = 273,
    CSSPropertyWebkitMaskComposite = 274,
    CSSPropertyWebkitMaskImage = 275,
    CSSPropertyWebkitMaskOrigin = 276,
    CSSPropertyWebkitMaskPositionX = 277,
    CSSPropertyWebkitMaskPositionY = 278,
    CSSPropertyWebkitMaskRepeatX = 279,
    CSSPropertyWebkitMaskRepeatY = 280,
    CSSPropertyWebkitMaskSize = 281,
    CSSPropertyWebkitPerspectiveOriginX = 282,
    CSSPropertyWebkitPerspectiveOriginY = 283,
    CSSPropertyWebkitPrintColorAdjust = 284,
    CSSPropertyWebkitRtlOrdering = 285,
    CSSPropertyWebkitRubyPosition = 286,
    CSSPropertyWebkitTapHighlightColor = 287,
    CSSPropertyWebkitTextCombine = 288,
    CSSPropertyWebkitTextEmphasisColor = 289,
    CSSPropertyWebkitTextEmphasisPosition = 290,
    CSSPropertyWebkitTextEmphasisStyle = 291,
    CSSPropertyWebkitTextFillColor = 292,
    CSSPropertyWebkitTextSecurity = 293,
    CSSPropertyWebkitTextStrokeColor = 294,
    CSSPropertyWebkitTextStrokeWidth = 295,
    CSSPropertyWebkitTransformOriginX = 296,
    CSSPropertyWebkitTransformOriginY = 297,
    CSSPropertyWebkitTransformOriginZ = 298,
    CSSPropertyWebkitUserDrag = 299,
    CSSPropertyWebkitUserModify = 300,
    CSSPropertyWebkitUserSelect = 301,
    CSSPropertyWhiteSpace = 302,
    CSSPropertyWidows = 303,
    CSSPropertyWidth = 304,
    CSSPropertyWillChange = 305,
    CSSPropertyWordBreak = 306,
    CSSPropertyWordSpacing = 307,
    CSSPropertyWordWrap = 308,
    CSSPropertyWritingMode = 309,
    CSSPropertyZIndex = 310,
    CSSPropertyWebkitBorderEndColor = 311,
    CSSPropertyWebkitBorderEndStyle = 312,
    CSSPropertyWebkitBorderEndWidth = 313,
    CSSPropertyWebkitBorderStartColor = 314,
    CSSPropertyWebkitBorderStartStyle = 315,
    CSSPropertyWebkitBorderStartWidth = 316,
    CSSPropertyWebkitBorderBeforeColor = 317,
    CSSPropertyWebkitBorderBeforeStyle = 318,
    CSSPropertyWebkitBorderBeforeWidth = 319,
    CSSPropertyWebkitBorderAfterColor = 320,
    CSSPropertyWebkitBorderAfterStyle = 321,
    CSSPropertyWebkitBorderAfterWidth = 322,
    CSSPropertyWebkitMarginEnd = 323,
    CSSPropertyWebkitMarginStart = 324,
    CSSPropertyWebkitMarginBefore = 325,
    CSSPropertyWebkitMarginAfter = 326,
    CSSPropertyWebkitPaddingEnd = 327,
    CSSPropertyWebkitPaddingStart = 328,
    CSSPropertyWebkitPaddingBefore = 329,
    CSSPropertyWebkitPaddingAfter = 330,
    CSSPropertyWebkitLogicalWidth = 331,
    CSSPropertyWebkitLogicalHeight = 332,
    CSSPropertyWebkitMinLogicalWidth = 333,
    CSSPropertyWebkitMinLogicalHeight = 334,
    CSSPropertyWebkitMaxLogicalWidth = 335,
    CSSPropertyWebkitMaxLogicalHeight = 336,
    CSSPropertyAll = 337,
    CSSPropertyEnableBackground = 338,
    CSSPropertyMaxZoom = 339,
    CSSPropertyMinZoom = 340,
    CSSPropertyOrientation = 341,
    CSSPropertyPage = 342,
    CSSPropertySrc = 343,
    CSSPropertyUnicodeRange = 344,
    CSSPropertyUserZoom = 345,
    CSSPropertyWebkitFontSizeDelta = 346,
    CSSPropertyWebkitTextDecorationsInEffect = 347,
    CSSPropertyAnimation = 348,
    CSSPropertyBackground = 349,
    CSSPropertyBackgroundPosition = 350,
    CSSPropertyBackgroundRepeat = 351,
    CSSPropertyBorder = 352,
    CSSPropertyBorderBottom = 353,
    CSSPropertyBorderColor = 354,
    CSSPropertyBorderImage = 355,
    CSSPropertyBorderLeft = 356,
    CSSPropertyBorderRadius = 357,
    CSSPropertyBorderRight = 358,
    CSSPropertyBorderSpacing = 359,
    CSSPropertyBorderStyle = 360,
    CSSPropertyBorderTop = 361,
    CSSPropertyBorderWidth = 362,
    CSSPropertyFlex = 363,
    CSSPropertyFlexFlow = 364,
    CSSPropertyFont = 365,
    CSSPropertyGrid = 366,
    CSSPropertyGridArea = 367,
    CSSPropertyGridColumn = 368,
    CSSPropertyGridRow = 369,
    CSSPropertyGridTemplate = 370,
    CSSPropertyListStyle = 371,
    CSSPropertyMargin = 372,
    CSSPropertyMarker = 373,
    CSSPropertyMotion = 374,
    CSSPropertyOutline = 375,
    CSSPropertyOverflow = 376,
    CSSPropertyPadding = 377,
    CSSPropertyTransition = 378,
    CSSPropertyWebkitBorderAfter = 379,
    CSSPropertyWebkitBorderBefore = 380,
    CSSPropertyWebkitBorderEnd = 381,
    CSSPropertyWebkitBorderStart = 382,
    CSSPropertyWebkitColumnRule = 383,
    CSSPropertyWebkitColumns = 384,
    CSSPropertyWebkitMarginCollapse = 385,
    CSSPropertyWebkitMask = 386,
    CSSPropertyWebkitMaskBoxImage = 387,
    CSSPropertyWebkitMaskPosition = 388,
    CSSPropertyWebkitMaskRepeat = 389,
    CSSPropertyWebkitTextEmphasis = 390,
    CSSPropertyWebkitTextStroke = 391,
    CSSPropertyAliasEpubCaptionSide = 582,
    CSSPropertyAliasEpubTextCombine = 800,
    CSSPropertyAliasEpubTextEmphasis = 902,
    CSSPropertyAliasEpubTextEmphasisColor = 801,
    CSSPropertyAliasEpubTextEmphasisStyle = 803,
    CSSPropertyAliasEpubTextOrientation = 527,
    CSSPropertyAliasEpubTextTransform = 721,
    CSSPropertyAliasEpubWordBreak = 818,
    CSSPropertyAliasEpubWritingMode = 528,
    CSSPropertyAliasWebkitAlignContent = 531,
    CSSPropertyAliasWebkitAlignItems = 532,
    CSSPropertyAliasWebkitAlignSelf = 534,
    CSSPropertyAliasWebkitAnimation = 860,
    CSSPropertyAliasWebkitAnimationDelay = 535,
    CSSPropertyAliasWebkitAnimationDirection = 536,
    CSSPropertyAliasWebkitAnimationDuration = 537,
    CSSPropertyAliasWebkitAnimationFillMode = 538,
    CSSPropertyAliasWebkitAnimationIterationCount = 539,
    CSSPropertyAliasWebkitAnimationName = 540,
    CSSPropertyAliasWebkitAnimationPlayState = 541,
    CSSPropertyAliasWebkitAnimationTimingFunction = 542,
    CSSPropertyAliasWebkitBackfaceVisibility = 543,
    CSSPropertyAliasWebkitBackgroundSize = 554,
    CSSPropertyAliasWebkitBorderBottomLeftRadius = 557,
    CSSPropertyAliasWebkitBorderBottomRightRadius = 558,
    CSSPropertyAliasWebkitBorderRadius = 869,
    CSSPropertyAliasWebkitBorderTopLeftRadius = 574,
    CSSPropertyAliasWebkitBorderTopRightRadius = 575,
    CSSPropertyAliasWebkitBoxShadow = 579,
    CSSPropertyAliasWebkitBoxSizing = 580,
    CSSPropertyAliasWebkitFlex = 875,
    CSSPropertyAliasWebkitFlexBasis = 604,
    CSSPropertyAliasWebkitFlexDirection = 605,
    CSSPropertyAliasWebkitFlexFlow = 876,
    CSSPropertyAliasWebkitFlexGrow = 606,
    CSSPropertyAliasWebkitFlexShrink = 607,
    CSSPropertyAliasWebkitFlexWrap = 608,
    CSSPropertyAliasWebkitJustifyContent = 627,
    CSSPropertyAliasWebkitOpacity = 657,
    CSSPropertyAliasWebkitOrder = 658,
    CSSPropertyAliasWebkitPerspective = 675,
    CSSPropertyAliasWebkitPerspectiveOrigin = 676,
    CSSPropertyAliasWebkitShapeImageThreshold = 692,
    CSSPropertyAliasWebkitShapeMargin = 693,
    CSSPropertyAliasWebkitShapeOutside = 694,
    CSSPropertyAliasWebkitTransform = 725,
    CSSPropertyAliasWebkitTransformOrigin = 726,
    CSSPropertyAliasWebkitTransformStyle = 727,
    CSSPropertyAliasWebkitTransition = 890,
    CSSPropertyAliasWebkitTransitionDelay = 731,
    CSSPropertyAliasWebkitTransitionDuration = 732,
    CSSPropertyAliasWebkitTransitionProperty = 733,
    CSSPropertyAliasWebkitTransitionTimingFunction = 734,
};

const int firstCSSProperty = 1;
const int numCSSProperties = 391;
const int lastCSSProperty = 391;
const int lastUnresolvedCSSProperty = 902;
const size_t maxCSSPropertyNameLength = 40;

const char* getPropertyName(CSSPropertyID);
const WTF::AtomicString& getPropertyNameAtomicString(CSSPropertyID);
WTF::String getPropertyNameString(CSSPropertyID);
WTF::String getJSPropertyName(CSSPropertyID);

inline CSSPropertyID convertToCSSPropertyID(int value)
{
    ASSERT((value >= firstCSSProperty && value <= lastCSSProperty) || value == CSSPropertyInvalid);
    return static_cast<CSSPropertyID>(value);
}

inline CSSPropertyID resolveCSSPropertyID(CSSPropertyID id)
{
    return convertToCSSPropertyID(id & ~512);
}

inline bool isPropertyAlias(CSSPropertyID id) { return id & 512; }

CSSPropertyID unresolvedCSSPropertyID(const WTF::String&);

CSSPropertyID cssPropertyID(const WTF::String&);

} // namespace blink

namespace WTF {
template<> struct DefaultHash<blink::CSSPropertyID> { typedef IntHash<unsigned> Hash; };
template<> struct HashTraits<blink::CSSPropertyID> : GenericHashTraits<blink::CSSPropertyID> {
    static const bool emptyValueIsZero = true;
    static void constructDeletedValue(blink::CSSPropertyID& slot, bool) { slot = static_cast<blink::CSSPropertyID>(blink::lastUnresolvedCSSProperty + 1); }
    static bool isDeletedValue(blink::CSSPropertyID value) { return value == (blink::lastUnresolvedCSSProperty + 1); }
};
}

#endif // CSSPropertyNames_h
