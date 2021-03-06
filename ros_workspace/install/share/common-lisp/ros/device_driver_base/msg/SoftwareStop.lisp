; Auto-generated. Do not edit!


(cl:in-package device_driver_base-msg)


;//! \htmlinclude SoftwareStop.msg.html

(cl:defclass <SoftwareStop> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (stop
    :reader stop
    :initarg :stop
    :type cl:boolean
    :initform cl:nil)
   (message
    :reader message
    :initarg :message
    :type cl:string
    :initform ""))
)

(cl:defclass SoftwareStop (<SoftwareStop>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SoftwareStop>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SoftwareStop)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name device_driver_base-msg:<SoftwareStop> is deprecated: use device_driver_base-msg:SoftwareStop instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SoftwareStop>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader device_driver_base-msg:header-val is deprecated.  Use device_driver_base-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'stop-val :lambda-list '(m))
(cl:defmethod stop-val ((m <SoftwareStop>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader device_driver_base-msg:stop-val is deprecated.  Use device_driver_base-msg:stop instead.")
  (stop m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <SoftwareStop>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader device_driver_base-msg:message-val is deprecated.  Use device_driver_base-msg:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SoftwareStop>) ostream)
  "Serializes a message object of type '<SoftwareStop>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'stop) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SoftwareStop>) istream)
  "Deserializes a message object of type '<SoftwareStop>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:slot-value msg 'stop) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SoftwareStop>)))
  "Returns string type for a message object of type '<SoftwareStop>"
  "device_driver_base/SoftwareStop")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SoftwareStop)))
  "Returns string type for a message object of type 'SoftwareStop"
  "device_driver_base/SoftwareStop")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SoftwareStop>)))
  "Returns md5sum for a message object of type '<SoftwareStop>"
  "1e356d29f1193a9ede4461043af863ca")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SoftwareStop)))
  "Returns md5sum for a message object of type 'SoftwareStop"
  "1e356d29f1193a9ede4461043af863ca")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SoftwareStop>)))
  "Returns full string definition for message of type '<SoftwareStop>"
  (cl:format cl:nil "#Header~%Header header~%~%#Flag for if stop or release~%bool stop~%~%#Message explaining the stop call~%string message~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SoftwareStop)))
  "Returns full string definition for message of type 'SoftwareStop"
  (cl:format cl:nil "#Header~%Header header~%~%#Flag for if stop or release~%bool stop~%~%#Message explaining the stop call~%string message~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SoftwareStop>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SoftwareStop>))
  "Converts a ROS message object to a list"
  (cl:list 'SoftwareStop
    (cl:cons ':header (header msg))
    (cl:cons ':stop (stop msg))
    (cl:cons ':message (message msg))
))
