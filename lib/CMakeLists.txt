#how to build/link 3rd party libraries
#-----------------------------------------------------------------------------------------------------------------------


#-----------------------------------------------------------------------------------------------------------------------
#imgui
#file(GLOB IMGUI_BACKENDS_SRC CONFIGURE_DEPENDS imgui/backends/*.cpp)
#add_library(imgui_backends SHARED ${IMGUI_BACKENDS_SRC})
#target_include_directories(imgui_backends PUBLIC imgui)
#target_link_libraries(imgui_backends PUBLIC ${imgui_LIBRARIES} ${glfw3_LIBRARIES})
#-----------------------------------------------------------------------------------------------------------------------
add_library(glad SHARED ${PROJECT_SOURCE_DIR}/lib/glad/glad.c)
target_include_directories(glad PUBLIC ${PROJECT_SOURCE_DIR}/lib/glad/include)

