# generated from genmsg/cmake/pkg-msg-paths.cmake.em

# message include dirs in installspace
_prepend_path("${device_driver_base_DIR}/.." "msg;msg;msg" device_driver_base_MSG_INCLUDE_DIRS UNIQUE)
set(device_driver_base_MSG_DEPENDENCIES actionlib_msgs)
