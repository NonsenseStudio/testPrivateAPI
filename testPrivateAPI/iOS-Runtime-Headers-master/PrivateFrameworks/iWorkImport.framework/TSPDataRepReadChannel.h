/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel> {
    <SFUInputStream> * _inputStream;
    NSObject<OS_dispatch_queue> * _readQueue;
    SFUDataRepresentation * _representation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)close;
- (void)dealloc;
- (id)initWithRepresentation:(id)arg1;
- (void)readWithHandler:(id /* block */)arg1;

@end