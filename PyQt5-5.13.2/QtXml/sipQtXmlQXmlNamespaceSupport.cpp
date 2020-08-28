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

#include "sipAPIQtXml.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtXml/sipQtXmlQXmlNamespaceSupport.cpp"

#line 36 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtXml/sipQtXmlQXmlNamespaceSupport.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtXml/sipQtXmlQXmlNamespaceSupport.cpp"


PyDoc_STRVAR(doc_QXmlNamespaceSupport_setPrefix, "setPrefix(self, str, str)");

extern "C" {static PyObject *meth_QXmlNamespaceSupport_setPrefix(PyObject *, PyObject *);}
static PyObject *meth_QXmlNamespaceSupport_setPrefix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::QXmlNamespaceSupport *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlNamespaceSupport, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->setPrefix(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlNamespaceSupport, sipName_setPrefix, doc_QXmlNamespaceSupport_setPrefix);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlNamespaceSupport_prefix, "prefix(self, str) -> str");

extern "C" {static PyObject *meth_QXmlNamespaceSupport_prefix(PyObject *, PyObject *);}
static PyObject *meth_QXmlNamespaceSupport_prefix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QXmlNamespaceSupport *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlNamespaceSupport, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->prefix(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlNamespaceSupport, sipName_prefix, doc_QXmlNamespaceSupport_prefix);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlNamespaceSupport_uri, "uri(self, str) -> str");

extern "C" {static PyObject *meth_QXmlNamespaceSupport_uri(PyObject *, PyObject *);}
static PyObject *meth_QXmlNamespaceSupport_uri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QXmlNamespaceSupport *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlNamespaceSupport, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->uri(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlNamespaceSupport, sipName_uri, doc_QXmlNamespaceSupport_uri);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlNamespaceSupport_splitName, "splitName(self, str, str, str)");

extern "C" {static PyObject *meth_QXmlNamespaceSupport_splitName(PyObject *, PyObject *);}
static PyObject *meth_QXmlNamespaceSupport_splitName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QString* a1;
        int a1State = 0;
         ::QString* a2;
        int a2State = 0;
        const  ::QXmlNamespaceSupport *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QXmlNamespaceSupport, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            sipCpp->splitName(*a0,*a1,*a2);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QString,a1State);
            sipReleaseType(a2,sipType_QString,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlNamespaceSupport, sipName_splitName, doc_QXmlNamespaceSupport_splitName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlNamespaceSupport_processName, "processName(self, str, bool, str, str)");

extern "C" {static PyObject *meth_QXmlNamespaceSupport_processName(PyObject *, PyObject *);}
static PyObject *meth_QXmlNamespaceSupport_processName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        bool a1;
         ::QString* a2;
        int a2State = 0;
         ::QString* a3;
        int a3State = 0;
        const  ::QXmlNamespaceSupport *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1bJ1J1", &sipSelf, sipType_QXmlNamespaceSupport, &sipCpp, sipType_QString,&a0, &a0State, &a1, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State))
        {
            sipCpp->processName(*a0,a1,*a2,*a3);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a2,sipType_QString,a2State);
            sipReleaseType(a3,sipType_QString,a3State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlNamespaceSupport, sipName_processName, doc_QXmlNamespaceSupport_processName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlNamespaceSupport_prefixes, "prefixes(self) -> List[str]\n"
"prefixes(self, str) -> List[str]");

extern "C" {static PyObject *meth_QXmlNamespaceSupport_prefixes(PyObject *, PyObject *);}
static PyObject *meth_QXmlNamespaceSupport_prefixes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QXmlNamespaceSupport *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNamespaceSupport, &sipCpp))
        {
             ::QStringList*sipRes;

            sipRes = new  ::QStringList(sipCpp->prefixes());

            return sipConvertFromNewType(sipRes,sipType_QStringList,SIP_NULLPTR);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QXmlNamespaceSupport *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlNamespaceSupport, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QStringList*sipRes;

            sipRes = new  ::QStringList(sipCpp->prefixes(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStringList,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlNamespaceSupport, sipName_prefixes, doc_QXmlNamespaceSupport_prefixes);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlNamespaceSupport_pushContext, "pushContext(self)");

extern "C" {static PyObject *meth_QXmlNamespaceSupport_pushContext(PyObject *, PyObject *);}
static PyObject *meth_QXmlNamespaceSupport_pushContext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QXmlNamespaceSupport *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNamespaceSupport, &sipCpp))
        {
            sipCpp->pushContext();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlNamespaceSupport, sipName_pushContext, doc_QXmlNamespaceSupport_pushContext);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlNamespaceSupport_popContext, "popContext(self)");

extern "C" {static PyObject *meth_QXmlNamespaceSupport_popContext(PyObject *, PyObject *);}
static PyObject *meth_QXmlNamespaceSupport_popContext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QXmlNamespaceSupport *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNamespaceSupport, &sipCpp))
        {
            sipCpp->popContext();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlNamespaceSupport, sipName_popContext, doc_QXmlNamespaceSupport_popContext);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlNamespaceSupport_reset, "reset(self)");

extern "C" {static PyObject *meth_QXmlNamespaceSupport_reset(PyObject *, PyObject *);}
static PyObject *meth_QXmlNamespaceSupport_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QXmlNamespaceSupport *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNamespaceSupport, &sipCpp))
        {
            sipCpp->reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlNamespaceSupport, sipName_reset, doc_QXmlNamespaceSupport_reset);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlNamespaceSupport(void *, int);}
static void release_QXmlNamespaceSupport(void *sipCppV, int)
{
    delete reinterpret_cast< ::QXmlNamespaceSupport *>(sipCppV);
}


extern "C" {static void *array_QXmlNamespaceSupport(Py_ssize_t);}
static void *array_QXmlNamespaceSupport(Py_ssize_t sipNrElem)
{
    return new  ::QXmlNamespaceSupport[sipNrElem];
}


extern "C" {static void dealloc_QXmlNamespaceSupport(sipSimpleWrapper *);}
static void dealloc_QXmlNamespaceSupport(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QXmlNamespaceSupport(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QXmlNamespaceSupport(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlNamespaceSupport(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QXmlNamespaceSupport *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QXmlNamespaceSupport();

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QXmlNamespaceSupport[] = {
    {sipName_popContext, meth_QXmlNamespaceSupport_popContext, METH_VARARGS, doc_QXmlNamespaceSupport_popContext},
    {sipName_prefix, meth_QXmlNamespaceSupport_prefix, METH_VARARGS, doc_QXmlNamespaceSupport_prefix},
    {sipName_prefixes, meth_QXmlNamespaceSupport_prefixes, METH_VARARGS, doc_QXmlNamespaceSupport_prefixes},
    {sipName_processName, meth_QXmlNamespaceSupport_processName, METH_VARARGS, doc_QXmlNamespaceSupport_processName},
    {sipName_pushContext, meth_QXmlNamespaceSupport_pushContext, METH_VARARGS, doc_QXmlNamespaceSupport_pushContext},
    {sipName_reset, meth_QXmlNamespaceSupport_reset, METH_VARARGS, doc_QXmlNamespaceSupport_reset},
    {sipName_setPrefix, meth_QXmlNamespaceSupport_setPrefix, METH_VARARGS, doc_QXmlNamespaceSupport_setPrefix},
    {sipName_splitName, meth_QXmlNamespaceSupport_splitName, METH_VARARGS, doc_QXmlNamespaceSupport_splitName},
    {sipName_uri, meth_QXmlNamespaceSupport_uri, METH_VARARGS, doc_QXmlNamespaceSupport_uri}
};

PyDoc_STRVAR(doc_QXmlNamespaceSupport, "\1QXmlNamespaceSupport()");


static pyqt5ClassPluginDef plugin_QXmlNamespaceSupport = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtXml_QXmlNamespaceSupport = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QXmlNamespaceSupport,
        SIP_NULLPTR,
        &plugin_QXmlNamespaceSupport
    },
    {
        sipNameNr_QXmlNamespaceSupport,
        {0, 0, 1},
        9, methods_QXmlNamespaceSupport,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QXmlNamespaceSupport,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QXmlNamespaceSupport,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QXmlNamespaceSupport,
    SIP_NULLPTR,
    array_QXmlNamespaceSupport,
    SIP_NULLPTR,
    release_QXmlNamespaceSupport,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
