#pragma once

#if defined(COC_OF)

#include "ofMain.h"
#include <glm/glm.hpp>

ofVec2f toOf( const glm::vec2 &_v ) {
    return ofVec2f( _v.x, _v.y );
}

#endif