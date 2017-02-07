/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteScanner : NSScanner {
    struct { 
        unsigned int caseSensitive : 1; 
        unsigned int  : 31; 
    }  flags;
    NSCharacterSet * invertedSkipSet;
    id  locale;
    unsigned int  scanLocation;
    NSString * scanString;
    NSCharacterSet * skipSet;
}

- (id)_invertedSkipSet;
- (BOOL)caseSensitive;
- (id)charactersToBeSkipped;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)locale;
- (BOOL)scanInt:(int*)arg1;
- (unsigned int)scanLocation;
- (BOOL)scanLongLong:(long long*)arg1;
- (void)setCaseSensitive:(BOOL)arg1;
- (void)setCharactersToBeSkipped:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setScanLocation:(unsigned int)arg1;
- (id)string;

@end