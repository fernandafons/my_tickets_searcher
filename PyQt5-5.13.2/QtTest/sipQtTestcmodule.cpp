/*
 * Module code.
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

#include "sipAPIQtTest.h"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtTest/sipQtTestcmodule.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 32 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtTest/sipQtTestcmodule.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 35 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtTest/sipQtTestcmodule.cpp"
#line 247 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 38 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtTest/sipQtTestcmodule.cpp"
#line 235 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 41 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtTest/sipQtTestcmodule.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtTest/qtestcase.sip"
#include <qtestcase.h>
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtTest/qtestkeyboard.sip"
#include <qtestkeyboard.h>
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtTest/qtestmouse.sip"
#include <qtestmouse.h>
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtTest/qtestsystem.sip"
#include <qtestsystem.h>
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtTest/qtesttouch.sip"
#include <qtesttouch.h>
#line 32 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtTest/qtesttouch.sip"
#include <qtesttouch.h>
#line 54 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtTest/sipQtTestcmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_QtTest[] = {
    'Q', 'A', 'b', 's', 't', 'r', 'a', 'c', 't', 'I', 't', 'e', 'm', 'M', 'o', 'd', 'e', 'l', 'T', 'e', 's', 't', 'e', 'r', ':', ':', 'F', 'a', 'i', 'l', 'u', 'r', 'e', 'R', 'e', 'p', 'o', 'r', 't', 'i', 'n', 'g', 'M', 'o', 'd', 'e', 0,
    'Q', 'T', 'e', 's', 't', ':', ':', 'Q', 'T', 'o', 'u', 'c', 'h', 'E', 'v', 'e', 'n', 't', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'e', 0,
    'Q', 'A', 'b', 's', 't', 'r', 'a', 'c', 't', 'I', 't', 'e', 'm', 'M', 'o', 'd', 'e', 'l', 'T', 'e', 's', 't', 'e', 'r', 0,
    'q', 'W', 'a', 'i', 't', 'F', 'o', 'r', 'W', 'i', 'n', 'd', 'o', 'w', 'E', 'x', 'p', 'o', 's', 'e', 'd', 0,
    'q', 'W', 'a', 'i', 't', 'F', 'o', 'r', 'W', 'i', 'n', 'd', 'o', 'w', 'A', 'c', 't', 'i', 'v', 'e', 0,
    'f', 'a', 'i', 'l', 'u', 'r', 'e', 'R', 'e', 'p', 'o', 'r', 't', 'i', 'n', 'g', 'M', 'o', 'd', 'e', 0,
    's', 'i', 'p', '.', 's', 'i', 'm', 'p', 'l', 'e', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 0,
    'Q', 'T', 'e', 's', 't', ':', ':', 'K', 'e', 'y', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    'p', 'r', 'o', 'c', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 's', 0,
    'm', 'o', 'u', 's', 'e', 'R', 'e', 'l', 'e', 'a', 's', 'e', 0,
    'P', 'y', 'Q', 't', '5', '.', 'Q', 't', 'T', 'e', 's', 't', 0,
    'm', 'o', 'u', 's', 'e', 'D', 'C', 'l', 'i', 'c', 'k', 0,
    'k', 'e', 'y', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'e', 0,
    'c', 'u', 's', 't', 'o', 'm', 'E', 'v', 'e', 'n', 't', 0,
    'e', 'v', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    '_', '_', 'd', 'e', 'l', 'i', 't', 'e', 'm', '_', '_', 0,
    '_', '_', 's', 'e', 't', 'i', 't', 'e', 'm', '_', '_', 0,
    '_', '_', 'g', 'e', 't', 'i', 't', 'e', 'm', '_', '_', 0,
    's', 't', 'a', 't', 'i', 'o', 'n', 'a', 'r', 'y', 0,
    'm', 'o', 'u', 's', 'e', 'P', 'r', 'e', 's', 's', 0,
    'm', 'o', 'u', 's', 'e', 'C', 'l', 'i', 'c', 'k', 0,
    'k', 'e', 'y', 'R', 'e', 'l', 'e', 'a', 's', 'e', 0,
    'Q', 'S', 'i', 'g', 'n', 'a', 'l', 'S', 'p', 'y', 0,
    't', 'o', 'u', 'c', 'h', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'h', 'i', 'l', 'd', 'E', 'v', 'e', 'n', 't', 0,
    't', 'i', 'm', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'o', 'u', 's', 'e', 'M', 'o', 'v', 'e', 0,
    'k', 'e', 'y', 'C', 'l', 'i', 'c', 'k', 's', 0,
    'k', 'e', 'y', 'P', 'r', 'e', 's', 's', 0,
    'k', 'e', 'y', 'C', 'l', 'i', 'c', 'k', 0,
    'k', 'e', 'y', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'o', 'd', 'i', 'f', 'i', 'e', 'r', 0,
    'S', 'h', 'o', 'r', 't', 'c', 'u', 't', 0,
    'W', 'a', 'r', 'n', 'i', 'n', 'g', 0,
    'r', 'e', 'l', 'e', 'a', 's', 'e', 0,
    't', 'i', 'm', 'e', 'o', 'u', 't', 0,
    '_', '_', 'l', 'e', 'n', '_', '_', 0,
    'i', 's', 'V', 'a', 'l', 'i', 'd', 0,
    'q', 'S', 'l', 'e', 'e', 'p', 0,
    'w', 'i', 'n', 'd', 'o', 'w', 0,
    'c', 'o', 'm', 'm', 'i', 't', 0,
    's', 'i', 'g', 'n', 'a', 'l', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    'p', 'r', 'e', 's', 's', 0,
    'q', 'W', 'a', 'i', 't', 0,
    'Q', 'T', 'e', 's', 't', 0,
    'F', 'a', 't', 'a', 'l', 0,
    'd', 'e', 'l', 'a', 'y', 0,
    'm', 'o', 'd', 'e', 'l', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'w', 'a', 'i', 't', 0,
    'm', 'o', 'v', 'e', 0,
    'p', 'o', 's', 0,
};
#line 94 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtTest/qsignalspy.sip"
// Imports from QtCore.
pyqt5_qttest_get_pyqtsignal_parts_t pyqt5_qttest_get_pyqtsignal_parts;
#line 116 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtTest/sipQtTestcmodule.cpp"

bool sipVH_QtTest_5(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::QEvent*a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "D", a0, sipType_QEvent, SIP_NULLPTR);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

bool sipVH_QtTest_4(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::QObject*a0, ::QEvent*a1)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "DD", a0, sipType_QObject, SIP_NULLPTR, a1, sipType_QEvent, SIP_NULLPTR);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

void sipVH_QtTest_3(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::QTimerEvent*a0)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "D", a0, sipType_QTimerEvent, SIP_NULLPTR);
}

void sipVH_QtTest_2(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::QChildEvent*a0)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "D", a0, sipType_QChildEvent, SIP_NULLPTR);
}

void sipVH_QtTest_1(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::QEvent*a0)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "D", a0, sipType_QEvent, SIP_NULLPTR);
}

void sipVH_QtTest_0(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const  ::QMetaMethod& a0)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "N", new  ::QMetaMethod(a0), sipType_QMetaMethod, SIP_NULLPTR);
}


/* Convert to a sub-class if possible. */
extern "C" {static const sipTypeDef *sipSubClass_QSignalSpy(void **);}
static const sipTypeDef *sipSubClass_QSignalSpy(void **sipCppRet)
{
     ::QObject *sipCpp = reinterpret_cast< ::QObject *>(*sipCppRet);
    const sipTypeDef *sipType;

#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtTest/qsignalspy.sip"
    sipType = (sipCpp->inherits("QSignalSpy") ? sipType_QSignalSpy : 0);
    
    #if QT_VERSION >= 0x050b00
    if (!sipType && sipCpp->inherits("QAbstractItemModelTester"))
        sipType = sipType_QAbstractItemModelTester;
    #endif
#line 173 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtTest/sipQtTestcmodule.cpp"

    return sipType;
}
static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QTest__KeyAction, SIP_NULLPTR, 0}, sipNameNr_KeyAction, 3, SIP_NULLPTR},
    {{-1, 0, 0, SIP_TYPE_SCOPED_ENUM, sipNameNr_QAbstractItemModelTester__FailureReportingMode, SIP_NULLPTR, 0}, sipNameNr_FailureReportingMode, 0, SIP_NULLPTR},
};


/*
 * This defines each type in this module.
 */
sipTypeDef *sipExportedTypes_QtTest[] = {
    &sipTypeDef_QtTest_QAbstractItemModelTester.ctd_base,
    &enumTypes[1].etd_base,
    &sipTypeDef_QtTest_QSignalSpy.ctd_base,
    &sipTypeDef_QtTest_QTest.ctd_base,
    &enumTypes[0].etd_base,
    &sipTypeDef_QtTest_QTest_QTouchEventSequence.ctd_base,
};


/* This defines the types that this module needs to import from QtCore. */
sipImportedTypeDef sipImportedTypes_QtTest_QtCore[] = {
    {"QAbstractItemModel"},
    {"QByteArray"},
    {"QChildEvent"},
    {"QEvent"},
    {"QList<QVariant>"},
    {"QMetaMethod"},
    {"QObject"},
    {"QPoint"},
    {"QString"},
    {"QTimerEvent"},
    {"Qt::Key"},
    {"Qt::KeyboardModifiers"},
    {"Qt::MouseButton"},
    {SIP_NULLPTR}
};


/*
 * This defines the virtual error handlers that this module needs to import
 * from QtCore.
 */
sipImportedVirtErrorHandlerDef sipImportedVirtErrorHandlers_QtTest_QtCore[] = {
    {"PyQt5"},
    {SIP_NULLPTR}
};


/* This defines the types that this module needs to import from QtGui. */
sipImportedTypeDef sipImportedTypes_QtTest_QtGui[] = {
    {"QKeySequence"},
    {"QTouchDevice"},
    {"QWindow"},
    {SIP_NULLPTR}
};


/* This defines the types that this module needs to import from QtWidgets. */
sipImportedTypeDef sipImportedTypes_QtTest_QtWidgets[] = {
    {"QWidget"},
    {SIP_NULLPTR}
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt5.QtCore", sipImportedTypes_QtTest_QtCore, sipImportedVirtErrorHandlers_QtTest_QtCore, SIP_NULLPTR},
    {"PyQt5.QtGui", sipImportedTypes_QtTest_QtGui, SIP_NULLPTR, SIP_NULLPTR},
    {"PyQt5.QtWidgets", sipImportedTypes_QtTest_QtWidgets, SIP_NULLPTR, SIP_NULLPTR},
    {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR}
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
    {sipSubClass_QSignalSpy, {6, 0, 0}, SIP_NULLPTR},
    {SIP_NULLPTR, {0, 0, 0}, SIP_NULLPTR}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_QtTest = {
    0,
    SIP_ABI_MINOR_VERSION,
    sipNameNr_PyQt5_QtTest,
    0,
    sipStrings_QtTest,
    importsTable,
    SIP_NULLPTR,
    6,
    sipExportedTypes_QtTest,
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR,
    convertorsTable,
    {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_QtTest;

sip_qt_metaobject_func sip_QtTest_qt_metaobject;
sip_qt_metacall_func sip_QtTest_qt_metacall;
sip_qt_metacast_func sip_QtTest_qt_metacast;


/* The Python module initialisation function. */
#if defined(SIP_STATIC_MODULE)
extern "C" PyObject *PyInit_QtTest()
#else
PyMODINIT_FUNC PyInit_QtTest()
#endif
{
    static PyMethodDef sip_methods[] = {
        {SIP_NULLPTR, SIP_NULLPTR, 0, SIP_NULLPTR}
    };

    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt5.QtTest",
        SIP_NULLPTR,
        -1,
        sip_methods,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_NULLPTR
    };

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
    if ((sipModule = PyModule_Create(&sip_module_def)) == SIP_NULLPTR)
        return SIP_NULLPTR;

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
    if ((sip_sipmod = PyImport_ImportModule("PyQt5.sip")) == SIP_NULLPTR)
    {
        Py_DECREF(sipModule);
        return SIP_NULLPTR;
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

    if (sip_capiobj == SIP_NULLPTR || !PyCapsule_CheckExact(sip_capiobj))
    {
        PyErr_SetString(PyExc_AttributeError, "PyQt5.sip._C_API is missing or has the wrong type");
        Py_DECREF(sipModule);
        return SIP_NULLPTR;
    }

    sipAPI_QtTest = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, "PyQt5.sip._C_API"));

    if (sipAPI_QtTest == SIP_NULLPTR)
    {
        Py_DECREF(sipModule);
        return SIP_NULLPTR;
    }

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_QtTest, SIP_ABI_MAJOR_VERSION, SIP_ABI_MINOR_VERSION, 0) < 0)
    {
        Py_DECREF(sipModule);
        return SIP_NULLPTR;
    }

    sip_QtTest_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_QtTest_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_QtTest_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_QtTest_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_QtTest,sipModuleDict) < 0)
    {
        Py_DECREF(sipModule);
        return SIP_NULLPTR;
    }
#line 99 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtTest/qsignalspy.sip"
// Imports from QtCore.
pyqt5_qttest_get_pyqtsignal_parts = (pyqt5_qttest_get_pyqtsignal_parts_t)sipImportSymbol("pyqt5_get_pyqtsignal_parts");
Q_ASSERT(pyqt5_qttest_get_pyqtsignal_parts);
#line 376 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtTest/sipQtTestcmodule.cpp"

    return sipModule;
}
