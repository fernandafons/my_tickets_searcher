/*
 * Interface wrapper code.
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

#include "sipAPIQtCore.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMetaMethod.cpp"

#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMetaMethod.cpp"
#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMetaMethod.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMetaMethod.cpp"
#line 177 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMetaMethod.cpp"
#line 160 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 45 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMetaMethod.cpp"
#line 38 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 48 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMetaMethod.cpp"
#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qmetaobject.sip"
// Raise an exception when QMetaMethod::invoke() returns false.
static void qtcore_invoke_exception()
{
    PyErr_SetString(PyExc_RuntimeError, "QMetaMethod.invoke() call failed");
}
#line 55 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMetaMethod.cpp"


PyDoc_STRVAR(doc_QMetaMethod_typeName, "typeName(self) -> str");

extern "C" {static PyObject *meth_QMetaMethod_typeName(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_typeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->typeName();

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_typeName, doc_QMetaMethod_typeName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_parameterTypes, "parameterTypes(self) -> List[QByteArray]");

extern "C" {static PyObject *meth_QMetaMethod_parameterTypes(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_parameterTypes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            QList< ::QByteArray>*sipRes;

            sipRes = new QList< ::QByteArray>(sipCpp->parameterTypes());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_parameterTypes, doc_QMetaMethod_parameterTypes);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_parameterNames, "parameterNames(self) -> List[QByteArray]");

extern "C" {static PyObject *meth_QMetaMethod_parameterNames(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_parameterNames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            QList< ::QByteArray>*sipRes;

            sipRes = new QList< ::QByteArray>(sipCpp->parameterNames());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_parameterNames, doc_QMetaMethod_parameterNames);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_tag, "tag(self) -> str");

extern "C" {static PyObject *meth_QMetaMethod_tag(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_tag(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->tag();

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_tag, doc_QMetaMethod_tag);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_access, "access(self) -> QMetaMethod.Access");

extern "C" {static PyObject *meth_QMetaMethod_access(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_access(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
             ::QMetaMethod::Access sipRes;

            sipRes = sipCpp->access();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QMetaMethod_Access);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_access, doc_QMetaMethod_access);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_methodType, "methodType(self) -> QMetaMethod.MethodType");

extern "C" {static PyObject *meth_QMetaMethod_methodType(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_methodType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
             ::QMetaMethod::MethodType sipRes;

            sipRes = sipCpp->methodType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QMetaMethod_MethodType);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_methodType, doc_QMetaMethod_methodType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_invoke, "invoke(self, QObject, Qt.ConnectionType, QGenericReturnArgument, value0: QGenericArgument = QGenericArgument(0,0), value1: QGenericArgument = QGenericArgument(0,0), value2: QGenericArgument = QGenericArgument(0,0), value3: QGenericArgument = QGenericArgument(0,0), value4: QGenericArgument = QGenericArgument(0,0), value5: QGenericArgument = QGenericArgument(0,0), value6: QGenericArgument = QGenericArgument(0,0), value7: QGenericArgument = QGenericArgument(0,0), value8: QGenericArgument = QGenericArgument(0,0), value9: QGenericArgument = QGenericArgument(0,0)) -> object\n"
"invoke(self, QObject, QGenericReturnArgument, value0: QGenericArgument = QGenericArgument(0,0), value1: QGenericArgument = QGenericArgument(0,0), value2: QGenericArgument = QGenericArgument(0,0), value3: QGenericArgument = QGenericArgument(0,0), value4: QGenericArgument = QGenericArgument(0,0), value5: QGenericArgument = QGenericArgument(0,0), value6: QGenericArgument = QGenericArgument(0,0), value7: QGenericArgument = QGenericArgument(0,0), value8: QGenericArgument = QGenericArgument(0,0), value9: QGenericArgument = QGenericArgument(0,0)) -> object\n"
"invoke(self, QObject, Qt.ConnectionType, value0: QGenericArgument = QGenericArgument(0,0), value1: QGenericArgument = QGenericArgument(0,0), value2: QGenericArgument = QGenericArgument(0,0), value3: QGenericArgument = QGenericArgument(0,0), value4: QGenericArgument = QGenericArgument(0,0), value5: QGenericArgument = QGenericArgument(0,0), value6: QGenericArgument = QGenericArgument(0,0), value7: QGenericArgument = QGenericArgument(0,0), value8: QGenericArgument = QGenericArgument(0,0), value9: QGenericArgument = QGenericArgument(0,0)) -> object\n"
"invoke(self, QObject, value0: QGenericArgument = QGenericArgument(0,0), value1: QGenericArgument = QGenericArgument(0,0), value2: QGenericArgument = QGenericArgument(0,0), value3: QGenericArgument = QGenericArgument(0,0), value4: QGenericArgument = QGenericArgument(0,0), value5: QGenericArgument = QGenericArgument(0,0), value6: QGenericArgument = QGenericArgument(0,0), value7: QGenericArgument = QGenericArgument(0,0), value8: QGenericArgument = QGenericArgument(0,0), value9: QGenericArgument = QGenericArgument(0,0)) -> object");

extern "C" {static PyObject *meth_QMetaMethod_invoke(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_invoke(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QObject* a0;
         ::Qt::ConnectionType a1;
         ::QGenericReturnArgument* a2;
        PyObject *a2Wrapper;
         ::QGenericArgument a3def = QGenericArgument(0,0);
         ::QGenericArgument* a3 = &a3def;
         ::QGenericArgument a4def = QGenericArgument(0,0);
         ::QGenericArgument* a4 = &a4def;
         ::QGenericArgument a5def = QGenericArgument(0,0);
         ::QGenericArgument* a5 = &a5def;
         ::QGenericArgument a6def = QGenericArgument(0,0);
         ::QGenericArgument* a6 = &a6def;
         ::QGenericArgument a7def = QGenericArgument(0,0);
         ::QGenericArgument* a7 = &a7def;
         ::QGenericArgument a8def = QGenericArgument(0,0);
         ::QGenericArgument* a8 = &a8def;
         ::QGenericArgument a9def = QGenericArgument(0,0);
         ::QGenericArgument* a9 = &a9def;
         ::QGenericArgument a10def = QGenericArgument(0,0);
         ::QGenericArgument* a10 = &a10def;
         ::QGenericArgument a11def = QGenericArgument(0,0);
         ::QGenericArgument* a11 = &a11def;
         ::QGenericArgument a12def = QGenericArgument(0,0);
         ::QGenericArgument* a12 = &a12def;
        const  ::QMetaMethod *sipCpp;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_value0,
            sipName_value1,
            sipName_value2,
            sipName_value3,
            sipName_value4,
            sipName_value5,
            sipName_value6,
            sipName_value7,
            sipName_value8,
            sipName_value9,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8E@J9|J9J9J9J9J9J9J9J9J9J9", &sipSelf, sipType_QMetaMethod, &sipCpp, sipType_QObject, &a0, sipType_Qt_ConnectionType, &a1, &a2Wrapper, sipType_QGenericReturnArgument, &a2, sipType_QGenericArgument, &a3, sipType_QGenericArgument, &a4, sipType_QGenericArgument, &a5, sipType_QGenericArgument, &a6, sipType_QGenericArgument, &a7, sipType_QGenericArgument, &a8, sipType_QGenericArgument, &a9, sipType_QGenericArgument, &a10, sipType_QGenericArgument, &a11, sipType_QGenericArgument, &a12))
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 64 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qmetaobject.sip"
        // Raise an exception if the call failed.
        bool ok;
        
        Py_BEGIN_ALLOW_THREADS
        ok = sipCpp->invoke(a0, a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10, *a11,
                *a12);
        Py_END_ALLOW_THREADS
        
        if (ok)
            sipRes = qpycore_ReturnValue(a2Wrapper);
        else
            qtcore_invoke_exception();
#line 306 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMetaMethod.cpp"

            return sipRes;
        }
    }

    {
         ::QObject* a0;
         ::QGenericReturnArgument* a1;
        PyObject *a1Wrapper;
         ::QGenericArgument a2def = QGenericArgument(0,0);
         ::QGenericArgument* a2 = &a2def;
         ::QGenericArgument a3def = QGenericArgument(0,0);
         ::QGenericArgument* a3 = &a3def;
         ::QGenericArgument a4def = QGenericArgument(0,0);
         ::QGenericArgument* a4 = &a4def;
         ::QGenericArgument a5def = QGenericArgument(0,0);
         ::QGenericArgument* a5 = &a5def;
         ::QGenericArgument a6def = QGenericArgument(0,0);
         ::QGenericArgument* a6 = &a6def;
         ::QGenericArgument a7def = QGenericArgument(0,0);
         ::QGenericArgument* a7 = &a7def;
         ::QGenericArgument a8def = QGenericArgument(0,0);
         ::QGenericArgument* a8 = &a8def;
         ::QGenericArgument a9def = QGenericArgument(0,0);
         ::QGenericArgument* a9 = &a9def;
         ::QGenericArgument a10def = QGenericArgument(0,0);
         ::QGenericArgument* a10 = &a10def;
         ::QGenericArgument a11def = QGenericArgument(0,0);
         ::QGenericArgument* a11 = &a11def;
        const  ::QMetaMethod *sipCpp;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_value0,
            sipName_value1,
            sipName_value2,
            sipName_value3,
            sipName_value4,
            sipName_value5,
            sipName_value6,
            sipName_value7,
            sipName_value8,
            sipName_value9,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8@J9|J9J9J9J9J9J9J9J9J9J9", &sipSelf, sipType_QMetaMethod, &sipCpp, sipType_QObject, &a0, &a1Wrapper, sipType_QGenericReturnArgument, &a1, sipType_QGenericArgument, &a2, sipType_QGenericArgument, &a3, sipType_QGenericArgument, &a4, sipType_QGenericArgument, &a5, sipType_QGenericArgument, &a6, sipType_QGenericArgument, &a7, sipType_QGenericArgument, &a8, sipType_QGenericArgument, &a9, sipType_QGenericArgument, &a10, sipType_QGenericArgument, &a11))
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 80 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qmetaobject.sip"
        // Raise an exception if the call failed.
        bool ok;
        
        Py_BEGIN_ALLOW_THREADS
        ok = sipCpp->invoke(a0, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10,
                *a11);
        Py_END_ALLOW_THREADS
        
        if (ok)
            sipRes = qpycore_ReturnValue(a1Wrapper);
        else
            qtcore_invoke_exception();
#line 370 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMetaMethod.cpp"

            return sipRes;
        }
    }

    {
         ::QObject* a0;
         ::Qt::ConnectionType a1;
         ::QGenericArgument a2def = QGenericArgument(0,0);
         ::QGenericArgument* a2 = &a2def;
         ::QGenericArgument a3def = QGenericArgument(0,0);
         ::QGenericArgument* a3 = &a3def;
         ::QGenericArgument a4def = QGenericArgument(0,0);
         ::QGenericArgument* a4 = &a4def;
         ::QGenericArgument a5def = QGenericArgument(0,0);
         ::QGenericArgument* a5 = &a5def;
         ::QGenericArgument a6def = QGenericArgument(0,0);
         ::QGenericArgument* a6 = &a6def;
         ::QGenericArgument a7def = QGenericArgument(0,0);
         ::QGenericArgument* a7 = &a7def;
         ::QGenericArgument a8def = QGenericArgument(0,0);
         ::QGenericArgument* a8 = &a8def;
         ::QGenericArgument a9def = QGenericArgument(0,0);
         ::QGenericArgument* a9 = &a9def;
         ::QGenericArgument a10def = QGenericArgument(0,0);
         ::QGenericArgument* a10 = &a10def;
         ::QGenericArgument a11def = QGenericArgument(0,0);
         ::QGenericArgument* a11 = &a11def;
        const  ::QMetaMethod *sipCpp;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_value0,
            sipName_value1,
            sipName_value2,
            sipName_value3,
            sipName_value4,
            sipName_value5,
            sipName_value6,
            sipName_value7,
            sipName_value8,
            sipName_value9,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8E|J9J9J9J9J9J9J9J9J9J9", &sipSelf, sipType_QMetaMethod, &sipCpp, sipType_QObject, &a0, sipType_Qt_ConnectionType, &a1, sipType_QGenericArgument, &a2, sipType_QGenericArgument, &a3, sipType_QGenericArgument, &a4, sipType_QGenericArgument, &a5, sipType_QGenericArgument, &a6, sipType_QGenericArgument, &a7, sipType_QGenericArgument, &a8, sipType_QGenericArgument, &a9, sipType_QGenericArgument, &a10, sipType_QGenericArgument, &a11))
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 96 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qmetaobject.sip"
        // Raise an exception if the call failed.
        bool ok;
        
        Py_BEGIN_ALLOW_THREADS
        ok = sipCpp->invoke(a0, a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10, *a11);
        Py_END_ALLOW_THREADS
        
        if (ok)
        {
            Py_INCREF(Py_None);
            sipRes = Py_None;
        }
        else
            qtcore_invoke_exception();
#line 435 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMetaMethod.cpp"

            return sipRes;
        }
    }

    {
         ::QObject* a0;
         ::QGenericArgument a1def = QGenericArgument(0,0);
         ::QGenericArgument* a1 = &a1def;
         ::QGenericArgument a2def = QGenericArgument(0,0);
         ::QGenericArgument* a2 = &a2def;
         ::QGenericArgument a3def = QGenericArgument(0,0);
         ::QGenericArgument* a3 = &a3def;
         ::QGenericArgument a4def = QGenericArgument(0,0);
         ::QGenericArgument* a4 = &a4def;
         ::QGenericArgument a5def = QGenericArgument(0,0);
         ::QGenericArgument* a5 = &a5def;
         ::QGenericArgument a6def = QGenericArgument(0,0);
         ::QGenericArgument* a6 = &a6def;
         ::QGenericArgument a7def = QGenericArgument(0,0);
         ::QGenericArgument* a7 = &a7def;
         ::QGenericArgument a8def = QGenericArgument(0,0);
         ::QGenericArgument* a8 = &a8def;
         ::QGenericArgument a9def = QGenericArgument(0,0);
         ::QGenericArgument* a9 = &a9def;
         ::QGenericArgument a10def = QGenericArgument(0,0);
         ::QGenericArgument* a10 = &a10def;
        const  ::QMetaMethod *sipCpp;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_value0,
            sipName_value1,
            sipName_value2,
            sipName_value3,
            sipName_value4,
            sipName_value5,
            sipName_value6,
            sipName_value7,
            sipName_value8,
            sipName_value9,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8|J9J9J9J9J9J9J9J9J9J9", &sipSelf, sipType_QMetaMethod, &sipCpp, sipType_QObject, &a0, sipType_QGenericArgument, &a1, sipType_QGenericArgument, &a2, sipType_QGenericArgument, &a3, sipType_QGenericArgument, &a4, sipType_QGenericArgument, &a5, sipType_QGenericArgument, &a6, sipType_QGenericArgument, &a7, sipType_QGenericArgument, &a8, sipType_QGenericArgument, &a9, sipType_QGenericArgument, &a10))
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 114 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qmetaobject.sip"
        // Raise an exception if the call failed.
        bool ok;
        
        Py_BEGIN_ALLOW_THREADS
        ok = sipCpp->invoke(a0, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10);
        Py_END_ALLOW_THREADS
        
        if (ok)
        {
            Py_INCREF(Py_None);
            sipRes = Py_None;
        }
        else
            qtcore_invoke_exception();
#line 498 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMetaMethod.cpp"

            return sipRes;
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_invoke, doc_QMetaMethod_invoke);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_methodIndex, "methodIndex(self) -> int");

extern "C" {static PyObject *meth_QMetaMethod_methodIndex(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_methodIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->methodIndex();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_methodIndex, doc_QMetaMethod_methodIndex);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QMetaMethod_isValid(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_isValid, doc_QMetaMethod_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_methodSignature, "methodSignature(self) -> QByteArray");

extern "C" {static PyObject *meth_QMetaMethod_methodSignature(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_methodSignature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->methodSignature());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_methodSignature, doc_QMetaMethod_methodSignature);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_name, "name(self) -> QByteArray");

extern "C" {static PyObject *meth_QMetaMethod_name(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_name, doc_QMetaMethod_name);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_returnType, "returnType(self) -> int");

extern "C" {static PyObject *meth_QMetaMethod_returnType(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_returnType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->returnType();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_returnType, doc_QMetaMethod_returnType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_parameterCount, "parameterCount(self) -> int");

extern "C" {static PyObject *meth_QMetaMethod_parameterCount(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_parameterCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->parameterCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_parameterCount, doc_QMetaMethod_parameterCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMetaMethod_parameterType, "parameterType(self, int) -> int");

extern "C" {static PyObject *meth_QMetaMethod_parameterType(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_parameterType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMetaMethod, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->parameterType(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_parameterType, doc_QMetaMethod_parameterType);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QMetaMethod___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMetaMethod___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMetaMethod *sipCpp = reinterpret_cast< ::QMetaMethod *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMetaMethod));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QMetaMethod, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMetaMethod___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMetaMethod___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMetaMethod *sipCpp = reinterpret_cast< ::QMetaMethod *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMetaMethod));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMetaMethod* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QMetaMethod, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QMetaMethod(void *, int);}
static void release_QMetaMethod(void *sipCppV, int)
{
    delete reinterpret_cast< ::QMetaMethod *>(sipCppV);
}


extern "C" {static void *array_QMetaMethod(Py_ssize_t);}
static void *array_QMetaMethod(Py_ssize_t sipNrElem)
{
    return new  ::QMetaMethod[sipNrElem];
}


extern "C" {static void assign_QMetaMethod(void *, Py_ssize_t, void *);}
static void assign_QMetaMethod(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QMetaMethod *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QMetaMethod *>(sipSrc);
}


extern "C" {static void *copy_QMetaMethod(const void *, Py_ssize_t);}
static void *copy_QMetaMethod(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QMetaMethod(reinterpret_cast<const  ::QMetaMethod *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMetaMethod(sipSimpleWrapper *);}
static void dealloc_QMetaMethod(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMetaMethod(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QMetaMethod(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMetaMethod(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QMetaMethod *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QMetaMethod();

            return sipCpp;
        }
    }

    {
        const  ::QMetaMethod* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QMetaMethod, &a0))
        {
            sipCpp = new  ::QMetaMethod(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMetaMethod[] = {
    {(void *)slot_QMetaMethod___eq__, eq_slot},
    {(void *)slot_QMetaMethod___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMetaMethod[] = {
    {sipName_access, meth_QMetaMethod_access, METH_VARARGS, doc_QMetaMethod_access},
    {sipName_invoke, SIP_MLMETH_CAST(meth_QMetaMethod_invoke), METH_VARARGS|METH_KEYWORDS, doc_QMetaMethod_invoke},
    {sipName_isValid, meth_QMetaMethod_isValid, METH_VARARGS, doc_QMetaMethod_isValid},
    {sipName_methodIndex, meth_QMetaMethod_methodIndex, METH_VARARGS, doc_QMetaMethod_methodIndex},
    {sipName_methodSignature, meth_QMetaMethod_methodSignature, METH_VARARGS, doc_QMetaMethod_methodSignature},
    {sipName_methodType, meth_QMetaMethod_methodType, METH_VARARGS, doc_QMetaMethod_methodType},
    {sipName_name, meth_QMetaMethod_name, METH_VARARGS, doc_QMetaMethod_name},
    {sipName_parameterCount, meth_QMetaMethod_parameterCount, METH_VARARGS, doc_QMetaMethod_parameterCount},
    {sipName_parameterNames, meth_QMetaMethod_parameterNames, METH_VARARGS, doc_QMetaMethod_parameterNames},
    {sipName_parameterType, meth_QMetaMethod_parameterType, METH_VARARGS, doc_QMetaMethod_parameterType},
    {sipName_parameterTypes, meth_QMetaMethod_parameterTypes, METH_VARARGS, doc_QMetaMethod_parameterTypes},
    {sipName_returnType, meth_QMetaMethod_returnType, METH_VARARGS, doc_QMetaMethod_returnType},
    {sipName_tag, meth_QMetaMethod_tag, METH_VARARGS, doc_QMetaMethod_tag},
    {sipName_typeName, meth_QMetaMethod_typeName, METH_VARARGS, doc_QMetaMethod_typeName}
};

static sipEnumMemberDef enummembers_QMetaMethod[] = {
    {sipName_Constructor, static_cast<int>( ::QMetaMethod::Constructor), 167},
    {sipName_Method, static_cast<int>( ::QMetaMethod::Method), 167},
    {sipName_Private, static_cast<int>( ::QMetaMethod::Private), 166},
    {sipName_Protected, static_cast<int>( ::QMetaMethod::Protected), 166},
    {sipName_Public, static_cast<int>( ::QMetaMethod::Public), 166},
    {sipName_Signal, static_cast<int>( ::QMetaMethod::Signal), 167},
    {sipName_Slot, static_cast<int>( ::QMetaMethod::Slot), 167},
};

PyDoc_STRVAR(doc_QMetaMethod, "\1QMetaMethod()\n"
"QMetaMethod(QMetaMethod)");


static pyqt5ClassPluginDef plugin_QMetaMethod = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QMetaMethod = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QMetaMethod,
        SIP_NULLPTR,
        &plugin_QMetaMethod
    },
    {
        sipNameNr_QMetaMethod,
        {0, 0, 1},
        14, methods_QMetaMethod,
        7, enummembers_QMetaMethod,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QMetaMethod,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QMetaMethod,
    init_type_QMetaMethod,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QMetaMethod,
    assign_QMetaMethod,
    array_QMetaMethod,
    copy_QMetaMethod,
    release_QMetaMethod,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
