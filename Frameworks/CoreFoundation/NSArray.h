/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:46:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) unsigned count; 
+(id)newWithContentsOf:(id)arg1 immutable:(char)arg2 ;
+(id)arrayWithContentsOfURL:(id)arg1 ;
+(id)arrayWithContentsOfFile:(id)arg1 ;
+(id)newArrayWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(char)arg3 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithArray:(id)arg1 copyItems:(char)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(char)arg3 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 copyItems:(char)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 ;
+(id)arrayWithSet:(id)arg1 copyItems:(char)arg2 ;
+(id)arrayWithSet:(id)arg1 ;
+(id)arrayWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
+(id)array;
+(id)arrayWithArray:(id)arg1 ;
+(id)arrayWithObject:(id)arg1 ;
+(id)arrayWithObjects:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(id)pathsMatchingExtensions:(id)arg1 ;
-(id)stringsByAppendingPathComponent:(id)arg1 ;
-(void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned)arg4 context:(void*)arg5 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned)arg2 ;
-(id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned)arg2 ;
-(id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned)arg2 ;
-(id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned)arg2 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned)arg3 ;
-(char)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned)arg3 error:(out id*)arg4 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_unionOfArraysForKeyPath:(id)arg1 ;
-(id)_unionOfObjectsForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_unionOfSetsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfSetsForKeyPath:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(id)_stringToWrite;
-(id)sortedArrayHint;
-(id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-(char)writeToURL:(id)arg1 atomically:(char)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)firstObjectCommonWithArray:(id)arg1 ;
-(unsigned)indexOfObjectAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(char)arg3 ;
-(id)initWithOrderedSet:(id)arg1 copyItems:(char)arg2 ;
-(char)_hasObjects;
-(char)_hasStrongReferences;
-(id)objectWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned)arg2 usingComparator:(/*^block*/id)arg3 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(char)arg3 ;
-(char)containsObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned)countForObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 ;
-(id)objectAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectsAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)reversedArray;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(id)arrayByExcludingToObjectsInArray:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned)arg2 ;
-(char)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long)_cfTypeID;
-(id)initWithSet:(id)arg1 copyItems:(char)arg2 ;
-(char)isNSArray__;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS17*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)indexOfObject:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)componentsJoinedByString:(id)arg1 ;
-(id)arrayByAddingObjectsFromArray:(id)arg1 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)containsObject:(id)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(id)allObjects;
-(id)reverseObjectEnumerator;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)objectEnumerator;
-(unsigned)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(id)arrayByAddingObject:(id)arg1 ;
-(char)isEqualToArray:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)initWithArray:(id)arg1 copyItems:(char)arg2 ;
-(id)arrayByExcludingObjectsInArray:(id)arg1 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(unsigned)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned)arg3 usingComparator:(/*^block*/id)arg4 ;
-(unsigned)indexOfObjectWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithObject:(id)arg1 ;
-(id)sortedArrayWithOptions:(unsigned)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)initWithSet:(id)arg1 ;
-(id)indexesOfObjectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)arrayByApplyingSelector:(SEL)arg1 ;
-(char)containsObjectIdenticalTo:(id)arg1 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(unsigned)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(unsigned)countForObject:(id)arg1 ;
@end
