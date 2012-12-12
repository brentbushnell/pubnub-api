//
//  PNServiceResponseCallbacks.h
//  pubnub
//
//  This header file stores keys which are
//  used to callback function names in service
//  response
//  
//
//  Created by Sergey Mamontov on 12/12/12.
//
//

#ifndef PNServiceResponseCallbacks_h
#define PNServiceResponseCallbacks_h


struct PNServiceResponseCallbacksStruct {
    
    // Name of the function which is used to
    // retrieve current time token from
    // PubNub service
    __unsafe_unretained NSString *timeTokenCallback;
    
    // Name of the function which is used to
    // retrieve messages and presence events
    // for set/single channel(s)
    __unsafe_unretained NSString *subscriptionCallback;
};

static struct PNServiceResponseCallbacksStruct PNServiceResponseCallbacks = {
    
    .timeTokenCallback = @"timeToken",
    .subscriptionCallback = @"subscription"
};


#endif // PNServiceResponseCallbacks_h
