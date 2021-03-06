/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"
#import "MusicLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ML3MusicLibrary;

@interface ML3Entity : XXUnknownSuperclass {
@private
	ML3MusicLibrary* _library;
	long long _persistentID;
}
@property(assign) ML3MusicLibrary* library;
@property(readonly, assign) long long persistentID;
@property(readonly, assign) BOOL existsInLibrary;
+(BOOL)insertValues:(id)values intoTable:(id)table persistentID:(long long)anId library:(id)library;
+(id)subselectStatementForProperty:(id)property;
+(id)subselectPropertyForProperty:(id)property;
+(id)joinClauseForProperty:(id)property;
+(id)newWithPersistentID:(long long)persistentID inLibrary:(id)library;
+(id)newWithDictionary:(id)dictionary inLibrary:(id)library;
+(id)defaultOrderingProperties;
+(id)foreignDatabaseTableForProperty:(id)property;
+(id)foreignColumnForProperty:(id)property;
+(id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;
+(BOOL)libraryContentsChangeForProperty:(id)property;
+(id)extraTablesToDelete;
+(id)persistentIDColumnForTable:(id)table;
+(id)predisambiguatedProperties;
+(void)predisambiguateProperties:(id)properties toDictionary:(id)dictionary;
+(id)disambiguatedSQLForProperty:(id)property;
+(id)indexableSQLForProperties:(id)properties;
+(id)orderingSQLForProperties:(id)properties directionality:(id)directionality;
-(id)initWithPersistentID:(long long)persistentID inLibrary:(id)library;
-(id)initWithDictionary:(id)dictionary inLibrary:(id)library;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(BOOL)matchesPredicate:(id)predicate;
-(id)newSelectSQLForProperties:(id*)properties count:(unsigned)count predicate:(id)predicate;
-(void)getValues:(id*)values forProperties:(id*)properties count:(unsigned)count;
-(id)valueForProperty:(id)property;
-(void)setValue:(id)value forProperty:(id)property;
-(BOOL)_deleteRowFromTable:(id)table usingColumn:(id)column;
-(BOOL)deleteFromLibrary;
@end

@interface ML3Entity (ML3QueryAdditions)
+(id)anyInLibrary:(id)library predicate:(id)predicate;
+(id)queryWithLibrary:(id)library predicate:(id)predicate;
+(id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties;
+(id)queryWithLibrary:(id)library predicate:(id)predicate usingSections:(BOOL)sections;
+(id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections;
+(id)representativeEntityOfEntity:(id)entity persistentIDProperty:(id)property foreignPersistentIDProperty:(id)property3;
+(id)directCollectionQueryWithAggregateQuery:(id)aggregateQuery predicate:(id)predicate usingSections:(BOOL)sections;
@end

@interface ML3Entity (ML3AggregateQueryAdditions)
+(id)aggregateQueryWithUnitQuery:(id)unitQuery foreignPersistentIDProperty:(id)property;
@end

