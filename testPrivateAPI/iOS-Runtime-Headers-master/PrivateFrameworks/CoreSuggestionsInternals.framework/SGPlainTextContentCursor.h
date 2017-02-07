/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPlainTextContentCursor : NSObject {
    struct { 
        unsigned short buffer[64]; 
        struct __CFString {} *theString; 
        unsigned short *directUniCharBuffer; 
        char *directCStringBuffer; 
        struct { 
            int location; 
            int length; 
        } rangeToBuffer; 
        int bufferedRangeStart; 
        int bufferedRangeEnd; 
    }  _ib;
    unsigned int  _len;
    unsigned int  _pos;
    NSIndexSet * _quoted;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _sig;
    struct __CFString { } * _str;
}

@property (nonatomic) unsigned int pos;

- (void).cxx_destruct;
- (BOOL)backward;
- (BOOL)backwardToString:(id)arg1 consume:(BOOL)arg2;
- (void)backwardWhile:(id /* block */)arg1;
- (void)dealloc;
- (BOOL)forward;
- (BOOL)forwardToString:(id)arg1 consume:(BOOL)arg2;
- (void)forwardWhile:(id /* block */)arg1;
- (id)init;
- (id)initWithEntity:(id)arg1;
- (unsigned int)pos;
- (void)seekToEnd;
- (void)seekToStart;
- (void)setPos:(unsigned int)arg1;

@end