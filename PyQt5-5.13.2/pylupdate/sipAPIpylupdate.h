/*
 * Internal module API header file.
 *
 * Generated by SIP 5.3.0
 *
 * Copyright (c) 2019 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef _pylupdateAPI_H
#define _pylupdateAPI_H

#if !defined(Py_LIMITED_API)
#define Py_LIMITED_API
#endif

#include "sip.h"

#include <QMetaType>
#include <QThread>

/* These are the qualifiers that are enabled. */
#define SIP_FEATURE_PyQt_MacOSXOnly
#define SIP_FEATURE_PyQt_Process
#define SIP_FEATURE_PyQt_NotBootstrapped
#define SIP_FEATURE_PyQt_Desktop_OpenGL
#define SIP_FEATURE_PyQt_OpenGL
#define SIP_FEATURE_PyQt_RawFont
#define SIP_FEATURE_PyQt_PrintPreviewDialog
#define SIP_FEATURE_PyQt_PrintPreviewWidget
#define SIP_FEATURE_PyQt_Printer
#define SIP_FEATURE_PyQt_PrintDialog
#define SIP_FEATURE_Py_v3
#define SIP_FEATURE_PyQt_qreal_double
#define SIP_FEATURE_PyQt_SSL
#define SIP_FEATURE_PyQt_SessionManager
#define SIP_FEATURE_PyQt_Accessibility
#define SIP_PLATFORM_WS_X11
#define SIP_TIMELINE_Qt_5_12_4


/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_0 0
#define sipName_0 &sipStrings_pylupdate[0]
#define sipNameNr_stripObsoleteMessages 22
#define sipName_stripObsoleteMessages &sipStrings_pylupdate[22]
#define sipNameNr_stripEmptyContexts 44
#define sipName_stripEmptyContexts &sipStrings_pylupdate[44]
#define sipNameNr_sip_simplewrapper 63
#define sipName_sip_simplewrapper &sipStrings_pylupdate[63]
#define sipNameNr_PyQt5_pylupdate 81
#define sipName_PyQt5_pylupdate &sipStrings_pylupdate[81]
#define sipNameNr_MetaTranslator 97
#define sipName_MetaTranslator &sipStrings_pylupdate[97]
#define sipNameNr_proFileTagMap 112
#define sipName_proFileTagMap &sipStrings_pylupdate[112]
#define sipNameNr_fetchtr_ui 126
#define sipName_fetchtr_ui &sipStrings_pylupdate[126]
#define sipNameNr_fetchtr_py 137
#define sipName_fetchtr_py &sipStrings_pylupdate[137]
#define sipNameNr_setCodec 148
#define sipName_setCodec &sipStrings_pylupdate[148]
#define sipNameNr_merge 157
#define sipName_merge &sipStrings_pylupdate[157]
#define sipNameNr_save 163
#define sipName_save &sipStrings_pylupdate[163]
#define sipNameNr_load 168
#define sipName_load &sipStrings_pylupdate[168]

#define sipMalloc                   sipAPI_pylupdate->api_malloc
#define sipFree                     sipAPI_pylupdate->api_free
#define sipBuildResult              sipAPI_pylupdate->api_build_result
#define sipCallMethod               sipAPI_pylupdate->api_call_method
#define sipCallProcedureMethod      sipAPI_pylupdate->api_call_procedure_method
#define sipCallErrorHandler         sipAPI_pylupdate->api_call_error_handler
#define sipParseResultEx            sipAPI_pylupdate->api_parse_result_ex
#define sipParseResult              sipAPI_pylupdate->api_parse_result
#define sipParseArgs                sipAPI_pylupdate->api_parse_args
#define sipParseKwdArgs             sipAPI_pylupdate->api_parse_kwd_args
#define sipParsePair                sipAPI_pylupdate->api_parse_pair
#define sipInstanceDestroyed        sipAPI_pylupdate->api_instance_destroyed
#define sipInstanceDestroyedEx      sipAPI_pylupdate->api_instance_destroyed_ex
#define sipConvertFromSequenceIndex sipAPI_pylupdate->api_convert_from_sequence_index
#define sipConvertFromSliceObject   sipAPI_pylupdate->api_convert_from_slice_object
#define sipConvertFromVoidPtr       sipAPI_pylupdate->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_pylupdate->api_convert_to_void_ptr
#define sipAddException             sipAPI_pylupdate->api_add_exception
#define sipNoFunction               sipAPI_pylupdate->api_no_function
#define sipNoMethod                 sipAPI_pylupdate->api_no_method
#define sipAbstractMethod           sipAPI_pylupdate->api_abstract_method
#define sipBadClass                 sipAPI_pylupdate->api_bad_class
#define sipBadCatcherResult         sipAPI_pylupdate->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_pylupdate->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_pylupdate->api_bad_operator_arg
#define sipTrace                    sipAPI_pylupdate->api_trace
#define sipTransferBack             sipAPI_pylupdate->api_transfer_back
#define sipTransferTo               sipAPI_pylupdate->api_transfer_to
#define sipSimpleWrapper_Type       sipAPI_pylupdate->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_pylupdate->api_wrapper_type
#define sipWrapperType_Type         sipAPI_pylupdate->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_pylupdate->api_voidptr_type
#define sipGetPyObject              sipAPI_pylupdate->api_get_pyobject
#define sipGetAddress               sipAPI_pylupdate->api_get_address
#define sipGetMixinAddress          sipAPI_pylupdate->api_get_mixin_address
#define sipGetCppPtr                sipAPI_pylupdate->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_pylupdate->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_pylupdate->api_is_py_method
#define sipIsPyMethod_12_8          sipAPI_pylupdate->api_is_py_method_12_8
#define sipCallHook                 sipAPI_pylupdate->api_call_hook
#define sipEndThread                sipAPI_pylupdate->api_end_thread
#define sipConnectRx                sipAPI_pylupdate->api_connect_rx
#define sipDisconnectRx             sipAPI_pylupdate->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_pylupdate->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_pylupdate->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_pylupdate->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_pylupdate->api_add_type_instance
#define sipFreeSipslot              sipAPI_pylupdate->api_free_sipslot
#define sipSameSlot                 sipAPI_pylupdate->api_same_slot
#define sipPySlotExtend             sipAPI_pylupdate->api_pyslot_extend
#define sipConvertRx                sipAPI_pylupdate->api_convert_rx
#define sipAddDelayedDtor           sipAPI_pylupdate->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_pylupdate->api_can_convert_to_type
#define sipConvertToType            sipAPI_pylupdate->api_convert_to_type
#define sipForceConvertToType       sipAPI_pylupdate->api_force_convert_to_type
#define sipConvertToEnum            sipAPI_pylupdate->api_convert_to_enum
#define sipConvertToBool            sipAPI_pylupdate->api_convert_to_bool
#define sipReleaseType              sipAPI_pylupdate->api_release_type
#define sipConvertFromType          sipAPI_pylupdate->api_convert_from_type
#define sipConvertFromNewType       sipAPI_pylupdate->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI_pylupdate->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI_pylupdate->api_convert_from_enum
#define sipGetState                 sipAPI_pylupdate->api_get_state
#define sipExportSymbol             sipAPI_pylupdate->api_export_symbol
#define sipImportSymbol             sipAPI_pylupdate->api_import_symbol
#define sipFindType                 sipAPI_pylupdate->api_find_type
#define sipBytes_AsChar             sipAPI_pylupdate->api_bytes_as_char
#define sipBytes_AsString           sipAPI_pylupdate->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_pylupdate->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_pylupdate->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_pylupdate->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_pylupdate->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_pylupdate->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_pylupdate->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_pylupdate->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_pylupdate->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_pylupdate->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_pylupdate->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_pylupdate->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_pylupdate->api_invoke_slot
#define sipInvokeSlotEx             sipAPI_pylupdate->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI_pylupdate->api_save_slot
#define sipClearAnySlotReference    sipAPI_pylupdate->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_pylupdate->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->wt_td->td_cname)
#define sipDeprecated               sipAPI_pylupdate->api_deprecated
#define sipGetReference             sipAPI_pylupdate->api_get_reference
#define sipKeepReference            sipAPI_pylupdate->api_keep_reference
#define sipRegisterProxyResolver    sipAPI_pylupdate->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI_pylupdate->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_pylupdate->api_type_from_py_type_object
#define sipTypeScope                sipAPI_pylupdate->api_type_scope
#define sipResolveTypedef           sipAPI_pylupdate->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_pylupdate->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_pylupdate->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI_pylupdate->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI_pylupdate->api_enable_autoconversion
#define sipEnableOverflowChecking   sipAPI_pylupdate->api_enable_overflow_checking
#define sipInitMixin                sipAPI_pylupdate->api_init_mixin
#define sipExportModule             sipAPI_pylupdate->api_export_module
#define sipInitModule               sipAPI_pylupdate->api_init_module
#define sipGetInterpreter           sipAPI_pylupdate->api_get_interpreter
#define sipSetNewUserTypeHandler    sipAPI_pylupdate->api_set_new_user_type_handler
#define sipSetTypeUserData          sipAPI_pylupdate->api_set_type_user_data
#define sipGetTypeUserData          sipAPI_pylupdate->api_get_type_user_data
#define sipPyTypeDict               sipAPI_pylupdate->api_py_type_dict
#define sipPyTypeName               sipAPI_pylupdate->api_py_type_name
#define sipGetCFunction             sipAPI_pylupdate->api_get_c_function
#define sipGetMethod                sipAPI_pylupdate->api_get_method
#define sipFromMethod               sipAPI_pylupdate->api_from_method
#define sipGetDate                  sipAPI_pylupdate->api_get_date
#define sipFromDate                 sipAPI_pylupdate->api_from_date
#define sipGetDateTime              sipAPI_pylupdate->api_get_datetime
#define sipFromDateTime             sipAPI_pylupdate->api_from_datetime
#define sipGetTime                  sipAPI_pylupdate->api_get_time
#define sipFromTime                 sipAPI_pylupdate->api_from_time
#define sipIsUserType               sipAPI_pylupdate->api_is_user_type
#define sipGetFrame                 sipAPI_pylupdate->api_get_frame
#define sipCheckPluginForType       sipAPI_pylupdate->api_check_plugin_for_type
#define sipUnicodeNew               sipAPI_pylupdate->api_unicode_new
#define sipUnicodeWrite             sipAPI_pylupdate->api_unicode_write
#define sipUnicodeData              sipAPI_pylupdate->api_unicode_data
#define sipGetBufferInfo            sipAPI_pylupdate->api_get_buffer_info
#define sipReleaseBufferInfo        sipAPI_pylupdate->api_release_buffer_info
#define sipIsOwnedByPython          sipAPI_pylupdate->api_is_owned_by_python
#define sipIsDerivedClass           sipAPI_pylupdate->api_is_derived_class
#define sipGetUserObject            sipAPI_pylupdate->api_get_user_object
#define sipSetUserObject            sipAPI_pylupdate->api_set_user_object
#define sipRegisterEventHandler     sipAPI_pylupdate->api_register_event_handler
#define sipConvertToArray           sipAPI_pylupdate->api_convert_to_array
#define sipConvertToTypedArray      sipAPI_pylupdate->api_convert_to_typed_array
#define sipEnableGC                 sipAPI_pylupdate->api_enable_gc
#define sipPrintObject              sipAPI_pylupdate->api_print_object
#define sipLong_AsChar              sipAPI_pylupdate->api_long_as_char
#define sipLong_AsSignedChar        sipAPI_pylupdate->api_long_as_signed_char
#define sipLong_AsUnsignedChar      sipAPI_pylupdate->api_long_as_unsigned_char
#define sipLong_AsShort             sipAPI_pylupdate->api_long_as_short
#define sipLong_AsUnsignedShort     sipAPI_pylupdate->api_long_as_unsigned_short
#define sipLong_AsInt               sipAPI_pylupdate->api_long_as_int
#define sipLong_AsUnsignedInt       sipAPI_pylupdate->api_long_as_unsigned_int
#define sipLong_AsLong              sipAPI_pylupdate->api_long_as_long
#define sipLong_AsUnsignedLong      sipAPI_pylupdate->api_long_as_unsigned_long
#define sipLong_AsLongLong          sipAPI_pylupdate->api_long_as_long_long
#define sipLong_AsUnsignedLongLong  sipAPI_pylupdate->api_long_as_unsigned_long_long
#define sipLong_AsSizeT             sipAPI_pylupdate->api_long_as_size_t
#define sipVisitWrappers            sipAPI_pylupdate->api_visit_wrappers
#define sipRegisterExitNotifier     sipAPI_pylupdate->api_register_exit_notifier

/* The strings used by this module. */
extern const char sipStrings_pylupdate[];

#define sipType_MetaTranslator sipExportedTypes_pylupdate[0]

extern sipClassTypeDef sipTypeDef_pylupdate_MetaTranslator;

#define sipType_QMap_0100QString_0100QString sipExportedTypes_pylupdate[1]

extern sipMappedTypeDef sipTypeDef_pylupdate_QMap_0100QString_0100QString;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_pylupdate;
extern sipExportedModuleDef sipModuleAPI_pylupdate;
extern sipTypeDef *sipExportedTypes_pylupdate[];

#define sipType_QString sipImportedTypes_pylupdate_QtCore[0].it_td
extern sipImportedTypeDef sipImportedTypes_pylupdate_QtCore[];

typedef const QMetaObject *(*sip_qt_metaobject_func)(sipSimpleWrapper *,sipTypeDef *);
extern sip_qt_metaobject_func sip_pylupdate_qt_metaobject;

typedef int (*sip_qt_metacall_func)(sipSimpleWrapper *,sipTypeDef *,QMetaObject::Call,int,void **);
extern sip_qt_metacall_func sip_pylupdate_qt_metacall;

typedef bool (*sip_qt_metacast_func)(sipSimpleWrapper *, const sipTypeDef *, const char *, void **);
extern sip_qt_metacast_func sip_pylupdate_qt_metacast;
#line 49 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/pylupdate/pylupdatemod.sip"
#include "pylupdate.h"
#line 265 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/pylupdate/sipAPIpylupdate.h"

#endif
