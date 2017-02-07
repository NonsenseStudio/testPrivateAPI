/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceGenerator : CDBRecurrenceGenerator

+ (int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:(int)arg1;

- (void)_prepareForEKRecurrence:(id)arg1;
- (void)_prepareForPersistentRecurrence:(id)arg1;
- (void)_setupForEKEvent:(id)arg1;
- (void)_setupForPersistentEvent:(id)arg1;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(int)arg7;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg4 timeZone:(id)arg5 limit:(int)arg6;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 timeZone:(id)arg4 limit:(int)arg5;
- (id)copyOccurrenceDatesWithEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg4 timeZone:(id)arg5 limit:(int)arg6;
- (id)copyOccurrenceDatesWithEvent:(id)arg1 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 timeZone:(id)arg4 limit:(int)arg5;
- (BOOL)isOccurrenceDate:(id)arg1 validForEvent:(id)arg2;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 exceptionDates:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 initialDate:(id)arg2 afterDate:(id)arg3;
- (BOOL)occurrenceDate:(id)arg1 matchesRecurrenceRule:(id)arg2 forEvent:(id)arg3 includeDetachedEventsInSeries:(BOOL)arg4;

@end