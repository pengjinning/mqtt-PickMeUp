/*******************************************************************************
 * Copyright (c) 2014 IBM Corp.
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * and Eclipse Distribution License v1.0 which accompany this distribution.
 *
 * The Eclipse Public License is available at
 *   http://www.eclipse.org/legal/epl-v10.html
 * and the Eclipse Distribution License is available at
 *   http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * Contributors:
 *    Mike Robertson, Bryan Boyd, Vladimir Kislicins, Joel Gauci, Nguyen Van Duy,
 *    Rahul Gupta, Vasfi Gucer
 *******************************************************************************/

#import <Foundation/Foundation.h>

/** PMUMessageFactory manages all MQTT message payload formats used by the application
 */
@interface PMUMessageFactory : NSObject

+ (NSString *)createPresenceMessage;

+ (NSString *)createRequestMessage;

+ (NSString *)createChatMessage:(NSString *)format
                        payload:(NSString *)payload;

+ (NSString *)createPhotoMessage:(NSString *)payload;

+ (NSString *)createLocationMessage:(double)longitude
                           latitude:(double)latitude;

+ (NSString *)createPaymentMessage:(double)tipAmount
                            rating:(int)rating;

@end
