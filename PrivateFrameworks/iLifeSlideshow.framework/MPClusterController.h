/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MPClusterController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MPCluster, NSMutableDictionary, MPDocument, NSDate;

@interface MPClusterController : XXUnknownSuperclass {
	NSMutableDictionary* mSlides;
	NSMutableDictionary* mSlideClusters;
	MPCluster* mAllSlidesCluster;
	float mMinimumRequiredClusterRating;
	MPDocument* mAuthoredDocument;
	NSDate* mOldestSlideTimestamp;
	NSDate* mNewestSlideTimestamp;
}
+(id)sharedController;
+(void)releaseSharedController;
-(id)init;
-(void)dealloc;
-(void)flush;
-(void)setAuthoredDocument:(id)document;
-(int)addSlideForPath:(id)path withIndex:(int)index;
-(void)setLocationForSlide:(id)slide usingPath:(id)path;
-(void)addKeywords:(id)keywords forSlide:(id)slide;
-(id)allSlides;
-(id)slideForPath:(id)path;
-(id)allSlidesSortedByUsage;
-(id)nextLeastUsedSlides:(int)slides forLayer:(id)layer markAsUsed:(BOOL)used;
-(id)allSlidesSortedChronologically;
-(id)clusterSlidesSortedChronologically:(id)chronologically;
-(id)clusterSlidesSortedByUserDefinedSortOrder:(id)order userDefinedSlideOrder:(id)order2;
-(void)sortClusterSlidesChronologically:(id*)chronologically;
-(id)clustersBasedOnOrderedPaths:(id)paths;
-(int)lowestAvailableUsageCountForSlides:(id)slides;
-(void)resetAllUsageCounters;
-(void)flushClusters;
-(id)findBestCluster:(id)cluster;
-(id)findBestChronologicalCluster:(id)cluster startingWithSlide:(id)slide;
-(id)findBestClusterBasedOnUserDefinedSlideOrder:(id)order startingWithSlide:(id)slide;
-(id)findTitleSlides:(int)slides;
-(void)removeAllSingleSlideClusters;
-(void)updateKeywordClusters;
-(void)updateLocationClusters;
-(void)updateAllSlidesClusterWithSlide:(id)slide;
-(id)yearClusters;
-(id)monthClusters;
-(id)monthOfYearClusters;
-(id)dayOfYearClusters;
-(id)hourOfYearClusters;
-(id)minuteOfYearClusters;
-(id)keywordClusters;
-(id)locationClusters;
-(id)userProvidedClusters;
-(id)yearClusterForAssetAtPath:(id)path;
-(id)monthClusterForAssetAtPath:(id)path;
-(id)monthOfYearClusterForAssetAtPath:(id)path;
-(id)dayOfYearClusterForAssetAtPath:(id)path;
-(id)hourOfYearClusterForAssetAtPath:(id)path;
-(id)minuteOfYearClusterForAssetAtPath:(id)path;
-(void)addPaths:(id)paths toUserDefinedCluster:(id)userDefinedCluster;
-(id)orderedAndPrioritizedSlideClusters;
-(id)prioritizedSlideClustersDictionary;
-(void)updateClusterRatings;
-(void)updateRatingsForYearClusters;
-(void)updateRatingsForMonthClusters;
-(void)updateRatingsForMonthOfYearClusters;
-(void)updateRatingsForDayOfYearClusters;
-(void)updateRatingsForHourOfYearClusters;
-(void)updateRatingsForMinuteOfYearClusters;
-(void)updateRatingsForKeywordClusters;
-(void)updateRatingsForLocationClusters;
-(void)dumpClustersStatistics;
-(void)dumpSlidesStatistics;
@end

@interface MPClusterController (Private)
-(void)_removeAllSingleSlideClustersForClusterCategory:(id)clusterCategory;
@end
