/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceRule : EKObject <NSCopying> {
    EKRecurrenceEnd * _cachedEnd;
    BOOL  _usesEndDate;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, retain) EKRecurrenceEnd *cachedEnd;
@property (nonatomic, readonly) NSDate *cachedEndDate;
@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic, readonly) NSArray *daysOfTheMonth;
@property (nonatomic, readonly) NSArray *daysOfTheWeek;
@property (nonatomic, readonly) NSArray *daysOfTheYear;
@property (nonatomic, readonly) BOOL dirtyStateMayAffectExceptionDates;
@property (nonatomic, readonly) int firstDayOfTheWeek;
@property (nonatomic, readonly) int frequency;
@property (nonatomic, readonly) struct { int x1; int x2; int x3; int x4; int x5; double x6; } gregorianUnits;
@property (nonatomic, readonly) int interval;
@property (nonatomic, readonly) NSArray *monthsOfTheYear;
@property (nonatomic, retain) EKCalendarItem *owner;
@property (nonatomic, copy) EKRecurrenceEnd *recurrenceEnd;
@property (nonatomic, readonly) NSArray *setPositions;
@property (nonatomic, readonly) BOOL shouldPinMonthDays;
@property (readonly) BOOL usesEndDate;
@property (nonatomic, readonly) NSArray *weeksOfTheYear;

+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3;
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned int)arg1;
+ (id)iCalendarValueFromRecurrenceType:(int)arg1;
+ (id)recurrenceRuleWithType:(int)arg1 interval:(unsigned int)arg2 end:(id)arg3;

- (void).cxx_destruct;
- (id)UUID;
- (id)_persistentRule;
- (id)cachedEnd;
- (id)cachedEndDate;
- (id)calendarIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (id)description;
- (BOOL)dirtyStateMayAffectExceptionDates;
- (int)firstDayOfTheWeek;
- (int)frequency;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })gregorianUnits;
- (id)init;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 end:(id)arg3;
- (int)interval;
- (BOOL)isAnyDayRule;
- (BOOL)isSimpleRule;
- (BOOL)isWeekdayRule;
- (BOOL)isWeekendRule;
- (id)lazyLoadRelationForKey:(id)arg1;
- (BOOL)mayOccurAfterDate:(id)arg1;
- (id)monthsOfTheYear;
- (id)owner;
- (void)pinToEndsOfMonthsWithCalendarItem:(id)arg1;
- (id)recurrenceEnd;
- (void)reset;
- (void)setCachedEnd:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setFirstDayOfTheWeek:(unsigned int)arg1;
- (void)setFrequency:(int)arg1;
- (void)setInterval:(unsigned int)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (id)setPositions;
- (void)setRecurrenceEnd:(id)arg1;
- (void)setSetPositions:(id)arg1;
- (void)setWeeksOfTheYear:(id)arg1;
- (BOOL)shouldPinMonthDays;
- (id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2;
- (BOOL)usesEndDate;
- (id)weeksOfTheYear;

@end