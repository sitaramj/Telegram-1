/*
 * This is the source code of Telegram for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import "TGMediaAttachment.h"

#define TGForwardedMessageMediaAttachmentType ((int)0xAA1050C1)

@interface TGForwardedMessageMediaAttachment : TGMediaAttachment <NSCopying, TGMediaAttachmentParser>

@property (nonatomic) int64_t forwardPeerId;
@property (nonatomic) int forwardDate;

@property (nonatomic) int forwardMid;

@end
