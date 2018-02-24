//
//  HRCleanCache.h
//  HRCleanCache
//
//  Created by 郑振兴 on 2018/2/24.
//

#import <Foundation/Foundation.h>
typedef void(^cleanCacheBlock)();
@interface HRCleanCache : NSObject
/**
 *  清理缓存
 */
+(void)cleanCache:(cleanCacheBlock)block;
/**
 *  整个缓存目录的大小
 */
+(float)folderSizeAtPath;
@end
