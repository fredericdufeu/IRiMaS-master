//
//  ExternalObjectHeader.h
//  NodeComponentObject_Study
//
//  Created by Keitaro on 23/08/2018.
//

#ifndef ExternalObjectHeader_h
#define ExternalObjectHeader_h

// ------------------------------------------------------------
// test related object
#include "IRTestObject.h"

// ------------------------------------------------------------
// audio related object
#include "IRSoundPlayerObject.hpp"

#include "IRWaveformObject.hpp"

// ------------------------------------------------------------
// FFT related object
#include "IRSpectrogramObject.hpp"
#include "IRAudioAnalysisObject.hpp"

// ------------------------------------------------------------
// image related object
#include "IRImageViewerObject.hpp"
#include "IRISVObject.hpp"

// ------------------------------------------------------------
// video related object
#include "IRVideoPlayerObject.hpp"
#include "IRVideoThumbnailObject.hpp"
// ------------------------------------------------------------
// Text related object
#include "IRLabelObject.hpp"
#include "IRTextEditorObject.hpp"

// ------------------------------------------------------------
// UIs
#include "IRAutomationObject.hpp"

// other object

#include "ObjectGlobalTestObject.h"
#include "IRShapeObject.hpp"

// ------------------------------------------------------------
//#include "IRObjectCreater.hpp"
#include "IRObjectFactory.hpp"



namespace IR{
    
 
    
    
    
    
    
enum ObjectList
{
  
    IRLabel,
    IRTextEditor,
    IRImageViwer,
    IRSoundPlayer,
    IRWaveform,
    IRSpectrogram,
    IRAutomation
    
};
    
    
}


#endif /* ExternalObjectHeader_h */
