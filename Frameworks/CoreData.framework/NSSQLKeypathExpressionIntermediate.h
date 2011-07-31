/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLExpressionIntermediate.h"


__attribute__((visibility("hidden")))
@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {
}
-(id)_generateSQLForProperty:(id)property startEntity:(id)entity startAlias:(id)alias keypath:(id)keypath inContext:(id)context;
-(id)_generateSQLForKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many inContext:(id)context;
-(id)_generateCountClauseForToManyKeyPathExpression:(id)manyKeyPathExpression inContext:(id)context;
-(id)generateSQLStringInContext:(id)context;
@end
