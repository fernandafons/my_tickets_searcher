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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextCodec.cpp"

#line 27 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextCodec.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 60 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 38 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextCodec.cpp"
#line 38 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 41 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextCodec.cpp"
#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 44 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextCodec.cpp"
#line 89 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 47 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextCodec.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 50 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextCodec.cpp"
#line 105 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 53 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextCodec.cpp"
#line 646 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 56 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextCodec.cpp"


PyDoc_STRVAR(doc_QTextCodec_codecForName, "codecForName(Union[QByteArray, bytes, bytearray]) -> QTextCodec\n"
"codecForName(str) -> QTextCodec");

extern "C" {static PyObject *meth_QTextCodec_codecForName(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
             ::QTextCodec*sipRes;

            sipRes =  ::QTextCodec::codecForName(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromType(sipRes,sipType_QTextCodec,SIP_NULLPTR);
        }
    }

    {
        const char* a0;
        PyObject *a0Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "AA", &a0Keep, &a0))
        {
             ::QTextCodec*sipRes;

            sipRes =  ::QTextCodec::codecForName(a0);
            Py_DECREF(a0Keep);

            return sipConvertFromType(sipRes,sipType_QTextCodec,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForName, doc_QTextCodec_codecForName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_codecForMib, "codecForMib(int) -> QTextCodec");

extern "C" {static PyObject *meth_QTextCodec_codecForMib(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForMib(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
             ::QTextCodec*sipRes;

            sipRes =  ::QTextCodec::codecForMib(a0);

            return sipConvertFromType(sipRes,sipType_QTextCodec,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForMib, doc_QTextCodec_codecForMib);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_codecForHtml, "codecForHtml(Union[QByteArray, bytes, bytearray]) -> QTextCodec\n"
"codecForHtml(Union[QByteArray, bytes, bytearray], QTextCodec) -> QTextCodec");

extern "C" {static PyObject *meth_QTextCodec_codecForHtml(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForHtml(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
             ::QTextCodec*sipRes;

            sipRes =  ::QTextCodec::codecForHtml(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromType(sipRes,sipType_QTextCodec,SIP_NULLPTR);
        }
    }

    {
        const  ::QByteArray* a0;
        int a0State = 0;
         ::QTextCodec* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J8", sipType_QByteArray, &a0, &a0State, sipType_QTextCodec, &a1))
        {
             ::QTextCodec*sipRes;

            sipRes =  ::QTextCodec::codecForHtml(*a0,a1);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromType(sipRes,sipType_QTextCodec,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForHtml, doc_QTextCodec_codecForHtml);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_codecForUtfText, "codecForUtfText(Union[QByteArray, bytes, bytearray]) -> QTextCodec\n"
"codecForUtfText(Union[QByteArray, bytes, bytearray], QTextCodec) -> QTextCodec");

extern "C" {static PyObject *meth_QTextCodec_codecForUtfText(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForUtfText(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
             ::QTextCodec*sipRes;

            sipRes =  ::QTextCodec::codecForUtfText(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromType(sipRes,sipType_QTextCodec,SIP_NULLPTR);
        }
    }

    {
        const  ::QByteArray* a0;
        int a0State = 0;
         ::QTextCodec* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J8", sipType_QByteArray, &a0, &a0State, sipType_QTextCodec, &a1))
        {
             ::QTextCodec*sipRes;

            sipRes =  ::QTextCodec::codecForUtfText(*a0,a1);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromType(sipRes,sipType_QTextCodec,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForUtfText, doc_QTextCodec_codecForUtfText);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_availableCodecs, "availableCodecs() -> List[QByteArray]");

extern "C" {static PyObject *meth_QTextCodec_availableCodecs(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_availableCodecs(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList< ::QByteArray>*sipRes;

            sipRes = new QList< ::QByteArray>( ::QTextCodec::availableCodecs());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_availableCodecs, doc_QTextCodec_availableCodecs);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_availableMibs, "availableMibs() -> List[int]");

extern "C" {static PyObject *meth_QTextCodec_availableMibs(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_availableMibs(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QList<int>*sipRes;

            sipRes = new  ::QList<int>( ::QTextCodec::availableMibs());

            return sipConvertFromNewType(sipRes,sipType_QList_1800,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_availableMibs, doc_QTextCodec_availableMibs);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_codecForLocale, "codecForLocale() -> QTextCodec");

extern "C" {static PyObject *meth_QTextCodec_codecForLocale(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForLocale(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QTextCodec*sipRes;

            sipRes =  ::QTextCodec::codecForLocale();

            return sipConvertFromType(sipRes,sipType_QTextCodec,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForLocale, doc_QTextCodec_codecForLocale);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_setCodecForLocale, "setCodecForLocale(QTextCodec)");

extern "C" {static PyObject *meth_QTextCodec_setCodecForLocale(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_setCodecForLocale(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextCodec* a0;
        PyObject *a0Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "@J8", &a0Keep, sipType_QTextCodec, &a0))
        {
             ::QTextCodec::setCodecForLocale(a0);

            sipKeepReference(SIP_NULLPTR, -7, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_setCodecForLocale, doc_QTextCodec_setCodecForLocale);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_makeDecoder, "makeDecoder(self, flags: Union[QTextCodec.ConversionFlags, QTextCodec.ConversionFlag] = QTextCodec.DefaultConversion) -> QTextDecoder");

extern "C" {static PyObject *meth_QTextCodec_makeDecoder(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_makeDecoder(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextCodec::ConversionFlags a0def = QTextCodec::DefaultConversion;
         ::QTextCodec::ConversionFlags* a0 = &a0def;
        int a0State = 0;
        const  ::QTextCodec *sipCpp;

        static const char *sipKwdList[] = {
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|J1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QTextCodec_ConversionFlags, &a0, &a0State))
        {
             ::QTextDecoder*sipRes;

            sipRes = sipCpp->makeDecoder(*a0);
            sipReleaseType(a0,sipType_QTextCodec_ConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextDecoder,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_makeDecoder, doc_QTextCodec_makeDecoder);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_makeEncoder, "makeEncoder(self, flags: Union[QTextCodec.ConversionFlags, QTextCodec.ConversionFlag] = QTextCodec.DefaultConversion) -> QTextEncoder");

extern "C" {static PyObject *meth_QTextCodec_makeEncoder(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_makeEncoder(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextCodec::ConversionFlags a0def = QTextCodec::DefaultConversion;
         ::QTextCodec::ConversionFlags* a0 = &a0def;
        int a0State = 0;
        const  ::QTextCodec *sipCpp;

        static const char *sipKwdList[] = {
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|J1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QTextCodec_ConversionFlags, &a0, &a0State))
        {
             ::QTextEncoder*sipRes;

            sipRes = sipCpp->makeEncoder(*a0);
            sipReleaseType(a0,sipType_QTextCodec_ConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextEncoder,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_makeEncoder, doc_QTextCodec_makeEncoder);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_canEncode, "canEncode(self, str) -> bool");

extern "C" {static PyObject *meth_QTextCodec_canEncode(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_canEncode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->canEncode(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_canEncode, doc_QTextCodec_canEncode);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_toUnicode, "toUnicode(self, Union[QByteArray, bytes, bytearray]) -> str\n"
"toUnicode(self, str) -> str\n"
"toUnicode(self, bytes, state: QTextCodec.ConverterState = None) -> str");

extern "C" {static PyObject *meth_QTextCodec_toUnicode(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_toUnicode(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
        const  ::QTextCodec *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "BJ1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->toUnicode(*a0));
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    {
        const char* a0;
        const  ::QTextCodec *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "Bs", &sipSelf, sipType_QTextCodec, &sipCpp, &a0))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->toUnicode(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    {
        const char* a0;
        Py_ssize_t a1;
         ::QTextCodec::ConverterState* a2 = 0;
        const  ::QTextCodec *sipCpp;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bk|J8", &sipSelf, sipType_QTextCodec, &sipCpp, &a0, &a1, sipType_QTextCodec_ConverterState, &a2))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->toUnicode(a0,(int)a1,a2));

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_toUnicode, doc_QTextCodec_toUnicode);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_fromUnicode, "fromUnicode(self, str) -> QByteArray");

extern "C" {static PyObject *meth_QTextCodec_fromUnicode(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_fromUnicode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->fromUnicode(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_fromUnicode, doc_QTextCodec_fromUnicode);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_name, "name(self) -> QByteArray");

extern "C" {static PyObject *meth_QTextCodec_name(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
             ::QByteArray*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextCodec, sipName_name);
                return SIP_NULLPTR;
            }

            sipRes = new  ::QByteArray(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_name, doc_QTextCodec_name);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_aliases, "aliases(self) -> List[QByteArray]");

extern "C" {static PyObject *meth_QTextCodec_aliases(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_aliases(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
            QList< ::QByteArray>*sipRes;

            sipRes = new QList< ::QByteArray>((sipSelfWasArg ? sipCpp-> ::QTextCodec::aliases() : sipCpp->aliases()));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_aliases, doc_QTextCodec_aliases);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_mibEnum, "mibEnum(self) -> int");

extern "C" {static PyObject *meth_QTextCodec_mibEnum(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_mibEnum(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextCodec, sipName_mibEnum);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->mibEnum();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_mibEnum, doc_QTextCodec_mibEnum);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextCodec_convertToUnicode, "convertToUnicode(self, bytes, QTextCodec.ConverterState) -> str");

extern "C" {static PyObject *meth_QTextCodec_convertToUnicode(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_convertToUnicode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const char* a0;
        Py_ssize_t a1;
         ::QTextCodec::ConverterState* a2;
        const  ::QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pkJ8", &sipSelf, sipType_QTextCodec, &sipCpp, &a0, &a1, sipType_QTextCodec_ConverterState, &a2))
        {
             ::QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextCodec, sipName_convertToUnicode);
                return SIP_NULLPTR;
            }

            sipRes = new  ::QString(sipCpp->convertToUnicode(a0,(int)a1,a2));

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_convertToUnicode, doc_QTextCodec_convertToUnicode);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextCodec(void *, int);}
static void release_QTextCodec(void *, int)
{
}


static PyMethodDef methods_QTextCodec[] = {
    {sipName_aliases, meth_QTextCodec_aliases, METH_VARARGS, doc_QTextCodec_aliases},
    {sipName_availableCodecs, meth_QTextCodec_availableCodecs, METH_VARARGS, doc_QTextCodec_availableCodecs},
    {sipName_availableMibs, meth_QTextCodec_availableMibs, METH_VARARGS, doc_QTextCodec_availableMibs},
    {sipName_canEncode, meth_QTextCodec_canEncode, METH_VARARGS, doc_QTextCodec_canEncode},
    {sipName_codecForHtml, meth_QTextCodec_codecForHtml, METH_VARARGS, doc_QTextCodec_codecForHtml},
    {sipName_codecForLocale, meth_QTextCodec_codecForLocale, METH_VARARGS, doc_QTextCodec_codecForLocale},
    {sipName_codecForMib, meth_QTextCodec_codecForMib, METH_VARARGS, doc_QTextCodec_codecForMib},
    {sipName_codecForName, meth_QTextCodec_codecForName, METH_VARARGS, doc_QTextCodec_codecForName},
    {sipName_codecForUtfText, meth_QTextCodec_codecForUtfText, METH_VARARGS, doc_QTextCodec_codecForUtfText},
    {sipName_convertToUnicode, meth_QTextCodec_convertToUnicode, METH_VARARGS, doc_QTextCodec_convertToUnicode},
    {sipName_fromUnicode, meth_QTextCodec_fromUnicode, METH_VARARGS, doc_QTextCodec_fromUnicode},
    {sipName_makeDecoder, SIP_MLMETH_CAST(meth_QTextCodec_makeDecoder), METH_VARARGS|METH_KEYWORDS, doc_QTextCodec_makeDecoder},
    {sipName_makeEncoder, SIP_MLMETH_CAST(meth_QTextCodec_makeEncoder), METH_VARARGS|METH_KEYWORDS, doc_QTextCodec_makeEncoder},
    {sipName_mibEnum, meth_QTextCodec_mibEnum, METH_VARARGS, doc_QTextCodec_mibEnum},
    {sipName_name, meth_QTextCodec_name, METH_VARARGS, doc_QTextCodec_name},
    {sipName_setCodecForLocale, meth_QTextCodec_setCodecForLocale, METH_VARARGS, doc_QTextCodec_setCodecForLocale},
    {sipName_toUnicode, SIP_MLMETH_CAST(meth_QTextCodec_toUnicode), METH_VARARGS|METH_KEYWORDS, doc_QTextCodec_toUnicode}
};

static sipEnumMemberDef enummembers_QTextCodec[] = {
    {sipName_ConvertInvalidToNull, static_cast<int>( ::QTextCodec::ConvertInvalidToNull), 272},
    {sipName_DefaultConversion, static_cast<int>( ::QTextCodec::DefaultConversion), 272},
    {sipName_IgnoreHeader, static_cast<int>( ::QTextCodec::IgnoreHeader), 272},
};


static pyqt5ClassPluginDef plugin_QTextCodec = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QTextCodec = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTextCodec,
        SIP_NULLPTR,
        &plugin_QTextCodec
    },
    {
        sipNameNr_QTextCodec,
        {0, 0, 1},
        17, methods_QTextCodec,
        3, enummembers_QTextCodec,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QTextCodec,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};