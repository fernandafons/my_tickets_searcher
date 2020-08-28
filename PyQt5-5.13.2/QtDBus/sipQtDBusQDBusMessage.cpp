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

#include "sipAPIQtDBus.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtDBus/qdbusmessage.sip"
#include <qdbusmessage.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtDBus/sipQtDBusQDBusMessage.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtDBus/sipQtDBusQDBusMessage.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtDBus/sipQtDBusQDBusMessage.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtDBus/sipQtDBusQDBusMessage.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtDBus/qdbuserror.sip"
#include <qdbuserror.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtDBus/sipQtDBusQDBusMessage.cpp"


PyDoc_STRVAR(doc_QDBusMessage_createSignal, "createSignal(str, str, str) -> QDBusMessage");

extern "C" {static PyObject *meth_QDBusMessage_createSignal(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_createSignal(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage( ::QDBusMessage::createSignal(*a0,*a1,*a2));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_createSignal, doc_QDBusMessage_createSignal);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_createMethodCall, "createMethodCall(str, str, str, str) -> QDBusMessage");

extern "C" {static PyObject *meth_QDBusMessage_createMethodCall(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_createMethodCall(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;
        const  ::QString* a3;
        int a3State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J1J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage( ::QDBusMessage::createMethodCall(*a0,*a1,*a2,*a3));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast< ::QString *>(a3),sipType_QString,a3State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_createMethodCall, doc_QDBusMessage_createMethodCall);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_createError, "createError(str, str) -> QDBusMessage\n"
"createError(QDBusError) -> QDBusMessage\n"
"createError(QDBusError.ErrorType, str) -> QDBusMessage");

extern "C" {static PyObject *meth_QDBusMessage_createError(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_createError(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage( ::QDBusMessage::createError(*a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,SIP_NULLPTR);
        }
    }

    {
        const  ::QDBusError* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QDBusError, &a0))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage( ::QDBusMessage::createError(*a0));

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,SIP_NULLPTR);
        }
    }

    {
         ::QDBusError::ErrorType a0;
        const  ::QString* a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "EJ1", sipType_QDBusError_ErrorType, &a0, sipType_QString,&a1, &a1State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage( ::QDBusMessage::createError(a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_createError, doc_QDBusMessage_createError);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_createReply, "createReply(self, arguments: Iterable[Any] = []) -> QDBusMessage\n"
"createReply(self, Any) -> QDBusMessage");

extern "C" {static PyObject *meth_QDBusMessage_createReply(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_createReply(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const QList< ::QVariant>& a0def = QList<QVariant>();
        const QList< ::QVariant>* a0 = &a0def;
        int a0State = 0;
        const  ::QDBusMessage *sipCpp;

        static const char *sipKwdList[] = {
            sipName_arguments,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|J1", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QList_0100QVariant,&a0, &a0State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage(sipCpp->createReply(*a0));
            sipReleaseType(const_cast<QList< ::QVariant> *>(a0),sipType_QList_0100QVariant,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,SIP_NULLPTR);
        }
    }

    {
        const  ::QVariant* a0;
        int a0State = 0;
        const  ::QDBusMessage *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "BJ1", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QVariant, &a0, &a0State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage(sipCpp->createReply(*a0));
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_createReply, doc_QDBusMessage_createReply);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_createErrorReply, "createErrorReply(self, str, str) -> QDBusMessage\n"
"createErrorReply(self, QDBusError) -> QDBusMessage\n"
"createErrorReply(self, QDBusError.ErrorType, str) -> QDBusMessage");

extern "C" {static PyObject *meth_QDBusMessage_createErrorReply(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_createErrorReply(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage(sipCpp->createErrorReply(*a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,SIP_NULLPTR);
        }
    }

    {
        const  ::QDBusError* a0;
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QDBusError, &a0))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage(sipCpp->createErrorReply(*a0));

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,SIP_NULLPTR);
        }
    }

    {
         ::QDBusError::ErrorType a0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QDBusError_ErrorType, &a0, sipType_QString,&a1, &a1State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage(sipCpp->createErrorReply(a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_createErrorReply, doc_QDBusMessage_createErrorReply);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_service, "service(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_service(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_service(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->service());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_service, doc_QDBusMessage_service);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_path, "path(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_path(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_path(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->path());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_path, doc_QDBusMessage_path);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_interface, "interface(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_interface(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_interface(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->interface());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_interface, doc_QDBusMessage_interface);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_member, "member(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_member(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_member(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->member());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_member, doc_QDBusMessage_member);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_errorName, "errorName(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_errorName(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_errorName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->errorName());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_errorName, doc_QDBusMessage_errorName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_errorMessage, "errorMessage(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_errorMessage(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_errorMessage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->errorMessage());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_errorMessage, doc_QDBusMessage_errorMessage);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_type, "type(self) -> QDBusMessage.MessageType");

extern "C" {static PyObject *meth_QDBusMessage_type(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QDBusMessage::MessageType sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QDBusMessage_MessageType);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_type, doc_QDBusMessage_type);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_signature, "signature(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_signature(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_signature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->signature());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_signature, doc_QDBusMessage_signature);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_isReplyRequired, "isReplyRequired(self) -> bool");

extern "C" {static PyObject *meth_QDBusMessage_isReplyRequired(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_isReplyRequired(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isReplyRequired();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_isReplyRequired, doc_QDBusMessage_isReplyRequired);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_setDelayedReply, "setDelayedReply(self, bool)");

extern "C" {static PyObject *meth_QDBusMessage_setDelayedReply(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_setDelayedReply(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QDBusMessage, &sipCpp, &a0))
        {
            sipCpp->setDelayedReply(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_setDelayedReply, doc_QDBusMessage_setDelayedReply);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_isDelayedReply, "isDelayedReply(self) -> bool");

extern "C" {static PyObject *meth_QDBusMessage_isDelayedReply(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_isDelayedReply(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDelayedReply();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_isDelayedReply, doc_QDBusMessage_isDelayedReply);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_setAutoStartService, "setAutoStartService(self, bool)");

extern "C" {static PyObject *meth_QDBusMessage_setAutoStartService(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_setAutoStartService(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QDBusMessage, &sipCpp, &a0))
        {
            sipCpp->setAutoStartService(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_setAutoStartService, doc_QDBusMessage_setAutoStartService);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_autoStartService, "autoStartService(self) -> bool");

extern "C" {static PyObject *meth_QDBusMessage_autoStartService(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_autoStartService(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->autoStartService();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_autoStartService, doc_QDBusMessage_autoStartService);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_setArguments, "setArguments(self, Iterable[Any])");

extern "C" {static PyObject *meth_QDBusMessage_setArguments(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_setArguments(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const QList< ::QVariant>* a0;
        int a0State = 0;
         ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QList_0100QVariant,&a0, &a0State))
        {
            sipCpp->setArguments(*a0);
            sipReleaseType(const_cast<QList< ::QVariant> *>(a0),sipType_QList_0100QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_setArguments, doc_QDBusMessage_setArguments);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_arguments, "arguments(self) -> List[Any]");

extern "C" {static PyObject *meth_QDBusMessage_arguments(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_arguments(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
            QList< ::QVariant>*sipRes;

            sipRes = new QList< ::QVariant>(sipCpp->arguments());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_arguments, doc_QDBusMessage_arguments);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_swap, "swap(self, QDBusMessage)");

extern "C" {static PyObject *meth_QDBusMessage_swap(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QDBusMessage* a0;
         ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QDBusMessage, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_swap, doc_QDBusMessage_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_createTargetedSignal, "createTargetedSignal(str, str, str, str) -> QDBusMessage");

extern "C" {static PyObject *meth_QDBusMessage_createTargetedSignal(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_createTargetedSignal(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;
        const  ::QString* a3;
        int a3State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J1J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage( ::QDBusMessage::createTargetedSignal(*a0,*a1,*a2,*a3));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast< ::QString *>(a3),sipType_QString,a3State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_createTargetedSignal, doc_QDBusMessage_createTargetedSignal);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_setInteractiveAuthorizationAllowed, "setInteractiveAuthorizationAllowed(self, bool)");

extern "C" {static PyObject *meth_QDBusMessage_setInteractiveAuthorizationAllowed(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_setInteractiveAuthorizationAllowed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QDBusMessage, &sipCpp, &a0))
        {
            sipCpp->setInteractiveAuthorizationAllowed(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_setInteractiveAuthorizationAllowed, doc_QDBusMessage_setInteractiveAuthorizationAllowed);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDBusMessage_isInteractiveAuthorizationAllowed, "isInteractiveAuthorizationAllowed(self) -> bool");

extern "C" {static PyObject *meth_QDBusMessage_isInteractiveAuthorizationAllowed(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_isInteractiveAuthorizationAllowed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isInteractiveAuthorizationAllowed();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_isInteractiveAuthorizationAllowed, doc_QDBusMessage_isInteractiveAuthorizationAllowed);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QDBusMessage___lshift__(PyObject *,PyObject *);}
static PyObject *slot_QDBusMessage___lshift__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QDBusMessage* a0;
        const  ::QVariant* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J1", sipType_QDBusMessage, &a0, sipType_QVariant, &a1, &a1State))
        {
             ::QDBusMessage*sipRes;

            sipRes = &(*a0 << *a1);
            sipReleaseType(const_cast< ::QVariant *>(a1),sipType_QVariant,a1State);

            return sipConvertFromType(sipRes,sipType_QDBusMessage,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtDBus, lshift_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


/* Call the instance's destructor. */
extern "C" {static void release_QDBusMessage(void *, int);}
static void release_QDBusMessage(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDBusMessage *>(sipCppV);
}


extern "C" {static void *array_QDBusMessage(Py_ssize_t);}
static void *array_QDBusMessage(Py_ssize_t sipNrElem)
{
    return new  ::QDBusMessage[sipNrElem];
}


extern "C" {static void assign_QDBusMessage(void *, Py_ssize_t, void *);}
static void assign_QDBusMessage(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDBusMessage *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDBusMessage *>(sipSrc);
}


extern "C" {static void *copy_QDBusMessage(const void *, Py_ssize_t);}
static void *copy_QDBusMessage(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QDBusMessage(reinterpret_cast<const  ::QDBusMessage *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDBusMessage(sipSimpleWrapper *);}
static void dealloc_QDBusMessage(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDBusMessage(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDBusMessage(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusMessage(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDBusMessage *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QDBusMessage();

            return sipCpp;
        }
    }

    {
        const  ::QDBusMessage* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QDBusMessage, &a0))
        {
            sipCpp = new  ::QDBusMessage(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDBusMessage[] = {
    {(void *)slot_QDBusMessage___lshift__, lshift_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDBusMessage[] = {
    {sipName_arguments, meth_QDBusMessage_arguments, METH_VARARGS, doc_QDBusMessage_arguments},
    {sipName_autoStartService, meth_QDBusMessage_autoStartService, METH_VARARGS, doc_QDBusMessage_autoStartService},
    {sipName_createError, meth_QDBusMessage_createError, METH_VARARGS, doc_QDBusMessage_createError},
    {sipName_createErrorReply, meth_QDBusMessage_createErrorReply, METH_VARARGS, doc_QDBusMessage_createErrorReply},
    {sipName_createMethodCall, meth_QDBusMessage_createMethodCall, METH_VARARGS, doc_QDBusMessage_createMethodCall},
    {sipName_createReply, SIP_MLMETH_CAST(meth_QDBusMessage_createReply), METH_VARARGS|METH_KEYWORDS, doc_QDBusMessage_createReply},
    {sipName_createSignal, meth_QDBusMessage_createSignal, METH_VARARGS, doc_QDBusMessage_createSignal},
    {sipName_createTargetedSignal, meth_QDBusMessage_createTargetedSignal, METH_VARARGS, doc_QDBusMessage_createTargetedSignal},
    {sipName_errorMessage, meth_QDBusMessage_errorMessage, METH_VARARGS, doc_QDBusMessage_errorMessage},
    {sipName_errorName, meth_QDBusMessage_errorName, METH_VARARGS, doc_QDBusMessage_errorName},
    {sipName_interface, meth_QDBusMessage_interface, METH_VARARGS, doc_QDBusMessage_interface},
    {sipName_isDelayedReply, meth_QDBusMessage_isDelayedReply, METH_VARARGS, doc_QDBusMessage_isDelayedReply},
    {sipName_isInteractiveAuthorizationAllowed, meth_QDBusMessage_isInteractiveAuthorizationAllowed, METH_VARARGS, doc_QDBusMessage_isInteractiveAuthorizationAllowed},
    {sipName_isReplyRequired, meth_QDBusMessage_isReplyRequired, METH_VARARGS, doc_QDBusMessage_isReplyRequired},
    {sipName_member, meth_QDBusMessage_member, METH_VARARGS, doc_QDBusMessage_member},
    {sipName_path, meth_QDBusMessage_path, METH_VARARGS, doc_QDBusMessage_path},
    {sipName_service, meth_QDBusMessage_service, METH_VARARGS, doc_QDBusMessage_service},
    {sipName_setArguments, meth_QDBusMessage_setArguments, METH_VARARGS, doc_QDBusMessage_setArguments},
    {sipName_setAutoStartService, meth_QDBusMessage_setAutoStartService, METH_VARARGS, doc_QDBusMessage_setAutoStartService},
    {sipName_setDelayedReply, meth_QDBusMessage_setDelayedReply, METH_VARARGS, doc_QDBusMessage_setDelayedReply},
    {sipName_setInteractiveAuthorizationAllowed, meth_QDBusMessage_setInteractiveAuthorizationAllowed, METH_VARARGS, doc_QDBusMessage_setInteractiveAuthorizationAllowed},
    {sipName_signature, meth_QDBusMessage_signature, METH_VARARGS, doc_QDBusMessage_signature},
    {sipName_swap, meth_QDBusMessage_swap, METH_VARARGS, doc_QDBusMessage_swap},
    {sipName_type, meth_QDBusMessage_type, METH_VARARGS, doc_QDBusMessage_type}
};

static sipEnumMemberDef enummembers_QDBusMessage[] = {
    {sipName_ErrorMessage, static_cast<int>( ::QDBusMessage::ErrorMessage), 20},
    {sipName_InvalidMessage, static_cast<int>( ::QDBusMessage::InvalidMessage), 20},
    {sipName_MethodCallMessage, static_cast<int>( ::QDBusMessage::MethodCallMessage), 20},
    {sipName_ReplyMessage, static_cast<int>( ::QDBusMessage::ReplyMessage), 20},
    {sipName_SignalMessage, static_cast<int>( ::QDBusMessage::SignalMessage), 20},
};

PyDoc_STRVAR(doc_QDBusMessage, "\1QDBusMessage()\n"
"QDBusMessage(QDBusMessage)");


static pyqt5ClassPluginDef plugin_QDBusMessage = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtDBus_QDBusMessage = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDBusMessage,
        SIP_NULLPTR,
        &plugin_QDBusMessage
    },
    {
        sipNameNr_QDBusMessage,
        {0, 0, 1},
        24, methods_QDBusMessage,
        5, enummembers_QDBusMessage,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QDBusMessage,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QDBusMessage,
    init_type_QDBusMessage,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QDBusMessage,
    assign_QDBusMessage,
    array_QDBusMessage,
    copy_QDBusMessage,
    release_QDBusMessage,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};