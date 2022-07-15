######################################### cocos #################################################
# Add cocos libs.
include(CocosBuildSet)
include_directories(
  include(CocosBuildSet)
	${catkin_INCLUDE_DIRS}
  DEPENDS cocos2d 
  )
add_subdirectory(
  ${COCOS2DX_ROOT_PATH}/cocos
  ${ENGINE_BINARY_PATH}/cocos/core 	
) 
######################################### cocos #################################################
add_library(live2d_ros
	 AppDelegate.cpp
	 LAppAllocator.cpp
	 LAppDefine.cpp
	 LAppLive2DManager.cpp
	 LAppModel.cpp
	 LAppPal.cpp
	 LAppSprite.cpp
	 LAppView.cpp
	 SampleScene.cpp
	 TouchManager.cpp
)
target_link_libraries(live2d_ros
	cocos2d 
	${catkin_LIBRARIES} 
 )
