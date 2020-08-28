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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qurlquery.sip"
#include <qurlquery.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQUrlQuery.cpp"

#line 96 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQUrlQuery.cpp"
#line 27 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQUrlQuery.cpp"
#line 27 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qchar.sip"
#include <qchar.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQUrlQuery.cpp"
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQUrlQuery.cpp"
#line 96 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 45 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQUrlQuery.cpp"
#line 263 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 49 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQUrlQuery.cpp"


PyDoc_STRVAR(doc_QUrlQuery_swap, "swap(self, QUrlQuery)");

extern "C" {static PyObject *meth_QUrlQuery_swap(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QUrlQuery* a0;
         ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QUrlQuery, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_swap, doc_QUrlQuery_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QUrlQuery_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUrlQuery, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_isEmpty, doc_QUrlQuery_isEmpty);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_isDetached, "isDetached(self) -> bool");

extern "C" {static PyObject *meth_QUrlQuery_isDetached(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_isDetached(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUrlQuery, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDetached();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_isDetached, doc_QUrlQuery_isDetached);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_clear, "clear(self)");

extern "C" {static PyObject *meth_QUrlQuery_clear(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUrlQuery, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_clear, doc_QUrlQuery_clear);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_query, "query(self, options: Union[QUrl.ComponentFormattingOptions, QUrl.ComponentFormattingOption] = QUrl.PrettyDecoded) -> str");

extern "C" {static PyObject *meth_QUrlQuery_query(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_query(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QUrl::ComponentFormattingOptions a0def = QUrl::PrettyDecoded;
         ::QUrl::ComponentFormattingOptions* a0 = &a0def;
        int a0State = 0;
        const  ::QUrlQuery *sipCpp;

        static const char *sipKwdList[] = {
            sipName_options,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QUrl_ComponentFormattingOptions, &a0, &a0State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->query(*a0));
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_query, doc_QUrlQuery_query);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_setQuery, "setQuery(self, str)");

extern "C" {static PyObject *meth_QUrlQuery_setQuery(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_setQuery(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setQuery(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_setQuery, doc_QUrlQuery_setQuery);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_toString, "toString(self, options: Union[QUrl.ComponentFormattingOptions, QUrl.ComponentFormattingOption] = QUrl.PrettyDecoded) -> str");

extern "C" {static PyObject *meth_QUrlQuery_toString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_toString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QUrl::ComponentFormattingOptions a0def = QUrl::PrettyDecoded;
         ::QUrl::ComponentFormattingOptions* a0 = &a0def;
        int a0State = 0;
        const  ::QUrlQuery *sipCpp;

        static const char *sipKwdList[] = {
            sipName_options,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QUrl_ComponentFormattingOptions, &a0, &a0State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->toString(*a0));
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_toString, doc_QUrlQuery_toString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_setQueryDelimiters, "setQueryDelimiters(self, str, str)");

extern "C" {static PyObject *meth_QUrlQuery_setQueryDelimiters(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_setQueryDelimiters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QChar* a0;
        int a0State = 0;
         ::QChar* a1;
        int a1State = 0;
         ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QChar,&a0, &a0State, sipType_QChar,&a1, &a1State))
        {
            sipCpp->setQueryDelimiters(*a0,*a1);
            sipReleaseType(a0,sipType_QChar,a0State);
            sipReleaseType(a1,sipType_QChar,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_setQueryDelimiters, doc_QUrlQuery_setQueryDelimiters);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_queryValueDelimiter, "queryValueDelimiter(self) -> str");

extern "C" {static PyObject *meth_QUrlQuery_queryValueDelimiter(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_queryValueDelimiter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUrlQuery, &sipCpp))
        {
             ::QChar*sipRes;

            sipRes = new  ::QChar(sipCpp->queryValueDelimiter());

            return sipConvertFromNewType(sipRes,sipType_QChar,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_queryValueDelimiter, doc_QUrlQuery_queryValueDelimiter);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_queryPairDelimiter, "queryPairDelimiter(self) -> str");

extern "C" {static PyObject *meth_QUrlQuery_queryPairDelimiter(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_queryPairDelimiter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUrlQuery, &sipCpp))
        {
             ::QChar*sipRes;

            sipRes = new  ::QChar(sipCpp->queryPairDelimiter());

            return sipConvertFromNewType(sipRes,sipType_QChar,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_queryPairDelimiter, doc_QUrlQuery_queryPairDelimiter);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_setQueryItems, "setQueryItems(self, Iterable[Tuple[str, str]])");

extern "C" {static PyObject *meth_QUrlQuery_setQueryItems(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_setQueryItems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const QList<QPair<QString,QString> >* a0;
        int a0State = 0;
         ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QList_0600QPair_0100QString_0100QString,&a0, &a0State))
        {
            sipCpp->setQueryItems(*a0);
            sipReleaseType(const_cast<QList<QPair<QString,QString> > *>(a0),sipType_QList_0600QPair_0100QString_0100QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_setQueryItems, doc_QUrlQuery_setQueryItems);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_queryItems, "queryItems(self, options: Union[QUrl.ComponentFormattingOptions, QUrl.ComponentFormattingOption] = QUrl.PrettyDecoded) -> List[Tuple[str, str]]");

extern "C" {static PyObject *meth_QUrlQuery_queryItems(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_queryItems(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QUrl::ComponentFormattingOptions a0def = QUrl::PrettyDecoded;
         ::QUrl::ComponentFormattingOptions* a0 = &a0def;
        int a0State = 0;
        const  ::QUrlQuery *sipCpp;

        static const char *sipKwdList[] = {
            sipName_options,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QUrl_ComponentFormattingOptions, &a0, &a0State))
        {
            QList<QPair<QString,QString> >*sipRes;

            sipRes = new QList<QPair<QString,QString> >(sipCpp->queryItems(*a0));
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0600QPair_0100QString_0100QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_queryItems, doc_QUrlQuery_queryItems);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_hasQueryItem, "hasQueryItem(self, str) -> bool");

extern "C" {static PyObject *meth_QUrlQuery_hasQueryItem(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_hasQueryItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->hasQueryItem(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_hasQueryItem, doc_QUrlQuery_hasQueryItem);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_addQueryItem, "addQueryItem(self, str, str)");

extern "C" {static PyObject *meth_QUrlQuery_addQueryItem(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_addQueryItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->addQueryItem(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_addQueryItem, doc_QUrlQuery_addQueryItem);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_removeQueryItem, "removeQueryItem(self, str)");

extern "C" {static PyObject *meth_QUrlQuery_removeQueryItem(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_removeQueryItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->removeQueryItem(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_removeQueryItem, doc_QUrlQuery_removeQueryItem);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_queryItemValue, "queryItemValue(self, str, options: Union[QUrl.ComponentFormattingOptions, QUrl.ComponentFormattingOption] = QUrl.PrettyDecoded) -> str");

extern "C" {static PyObject *meth_QUrlQuery_queryItemValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_queryItemValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QUrl::ComponentFormattingOptions a1def = QUrl::PrettyDecoded;
         ::QUrl::ComponentFormattingOptions* a1 = &a1def;
        int a1State = 0;
        const  ::QUrlQuery *sipCpp;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_options,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State, sipType_QUrl_ComponentFormattingOptions, &a1, &a1State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->queryItemValue(*a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QUrl_ComponentFormattingOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_queryItemValue, doc_QUrlQuery_queryItemValue);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_allQueryItemValues, "allQueryItemValues(self, str, options: Union[QUrl.ComponentFormattingOptions, QUrl.ComponentFormattingOption] = QUrl.PrettyDecoded) -> List[str]");

extern "C" {static PyObject *meth_QUrlQuery_allQueryItemValues(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_allQueryItemValues(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QUrl::ComponentFormattingOptions a1def = QUrl::PrettyDecoded;
         ::QUrl::ComponentFormattingOptions* a1 = &a1def;
        int a1State = 0;
        const  ::QUrlQuery *sipCpp;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_options,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State, sipType_QUrl_ComponentFormattingOptions, &a1, &a1State))
        {
             ::QStringList*sipRes;

            sipRes = new  ::QStringList(sipCpp->allQueryItemValues(*a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QUrl_ComponentFormattingOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStringList,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_allQueryItemValues, doc_QUrlQuery_allQueryItemValues);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_removeAllQueryItems, "removeAllQueryItems(self, str)");

extern "C" {static PyObject *meth_QUrlQuery_removeAllQueryItems(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_removeAllQueryItems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->removeAllQueryItems(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_removeAllQueryItems, doc_QUrlQuery_removeAllQueryItems);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_defaultQueryValueDelimiter, "defaultQueryValueDelimiter() -> str");

extern "C" {static PyObject *meth_QUrlQuery_defaultQueryValueDelimiter(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_defaultQueryValueDelimiter(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QChar*sipRes;

            sipRes = new  ::QChar( ::QUrlQuery::defaultQueryValueDelimiter());

            return sipConvertFromNewType(sipRes,sipType_QChar,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_defaultQueryValueDelimiter, doc_QUrlQuery_defaultQueryValueDelimiter);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QUrlQuery_defaultQueryPairDelimiter, "defaultQueryPairDelimiter() -> str");

extern "C" {static PyObject *meth_QUrlQuery_defaultQueryPairDelimiter(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_defaultQueryPairDelimiter(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QChar*sipRes;

            sipRes = new  ::QChar( ::QUrlQuery::defaultQueryPairDelimiter());

            return sipConvertFromNewType(sipRes,sipType_QChar,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_defaultQueryPairDelimiter, doc_QUrlQuery_defaultQueryPairDelimiter);

    return SIP_NULLPTR;
}


extern "C" {static long slot_QUrlQuery___hash__(PyObject *);}
static long slot_QUrlQuery___hash__(PyObject *sipSelf)
{
     ::QUrlQuery *sipCpp = reinterpret_cast< ::QUrlQuery *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrlQuery));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 60 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qurlquery.sip"
        sipRes = qHash(*sipCpp);
#line 671 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQUrlQuery.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QUrlQuery___ne__(PyObject *,PyObject *);}
static PyObject *slot_QUrlQuery___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QUrlQuery *sipCpp = reinterpret_cast< ::QUrlQuery *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrlQuery));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QUrlQuery* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUrlQuery, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QUrlQuery::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QUrlQuery, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QUrlQuery___eq__(PyObject *,PyObject *);}
static PyObject *slot_QUrlQuery___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QUrlQuery *sipCpp = reinterpret_cast< ::QUrlQuery *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrlQuery));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QUrlQuery* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUrlQuery, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QUrlQuery::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QUrlQuery, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QUrlQuery(void *, int);}
static void release_QUrlQuery(void *sipCppV, int)
{
    delete reinterpret_cast< ::QUrlQuery *>(sipCppV);
}


extern "C" {static void *array_QUrlQuery(Py_ssize_t);}
static void *array_QUrlQuery(Py_ssize_t sipNrElem)
{
    return new  ::QUrlQuery[sipNrElem];
}


extern "C" {static void assign_QUrlQuery(void *, Py_ssize_t, void *);}
static void assign_QUrlQuery(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QUrlQuery *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QUrlQuery *>(sipSrc);
}


extern "C" {static void *copy_QUrlQuery(const void *, Py_ssize_t);}
static void *copy_QUrlQuery(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QUrlQuery(reinterpret_cast<const  ::QUrlQuery *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QUrlQuery(sipSimpleWrapper *);}
static void dealloc_QUrlQuery(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QUrlQuery(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QUrlQuery(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QUrlQuery(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QUrlQuery *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QUrlQuery();

            return sipCpp;
        }
    }

    {
        const  ::QUrl* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QUrl, &a0))
        {
            sipCpp = new  ::QUrlQuery(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new  ::QUrlQuery(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const  ::QUrlQuery* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QUrlQuery, &a0))
        {
            sipCpp = new  ::QUrlQuery(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QUrlQuery[] = {
    {(void *)slot_QUrlQuery___hash__, hash_slot},
    {(void *)slot_QUrlQuery___ne__, ne_slot},
    {(void *)slot_QUrlQuery___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QUrlQuery[] = {
    {sipName_addQueryItem, meth_QUrlQuery_addQueryItem, METH_VARARGS, doc_QUrlQuery_addQueryItem},
    {sipName_allQueryItemValues, SIP_MLMETH_CAST(meth_QUrlQuery_allQueryItemValues), METH_VARARGS|METH_KEYWORDS, doc_QUrlQuery_allQueryItemValues},
    {sipName_clear, meth_QUrlQuery_clear, METH_VARARGS, doc_QUrlQuery_clear},
    {sipName_defaultQueryPairDelimiter, meth_QUrlQuery_defaultQueryPairDelimiter, METH_VARARGS, doc_QUrlQuery_defaultQueryPairDelimiter},
    {sipName_defaultQueryValueDelimiter, meth_QUrlQuery_defaultQueryValueDelimiter, METH_VARARGS, doc_QUrlQuery_defaultQueryValueDelimiter},
    {sipName_hasQueryItem, meth_QUrlQuery_hasQueryItem, METH_VARARGS, doc_QUrlQuery_hasQueryItem},
    {sipName_isDetached, meth_QUrlQuery_isDetached, METH_VARARGS, doc_QUrlQuery_isDetached},
    {sipName_isEmpty, meth_QUrlQuery_isEmpty, METH_VARARGS, doc_QUrlQuery_isEmpty},
    {sipName_query, SIP_MLMETH_CAST(meth_QUrlQuery_query), METH_VARARGS|METH_KEYWORDS, doc_QUrlQuery_query},
    {sipName_queryItemValue, SIP_MLMETH_CAST(meth_QUrlQuery_queryItemValue), METH_VARARGS|METH_KEYWORDS, doc_QUrlQuery_queryItemValue},
    {sipName_queryItems, SIP_MLMETH_CAST(meth_QUrlQuery_queryItems), METH_VARARGS|METH_KEYWORDS, doc_QUrlQuery_queryItems},
    {sipName_queryPairDelimiter, meth_QUrlQuery_queryPairDelimiter, METH_VARARGS, doc_QUrlQuery_queryPairDelimiter},
    {sipName_queryValueDelimiter, meth_QUrlQuery_queryValueDelimiter, METH_VARARGS, doc_QUrlQuery_queryValueDelimiter},
    {sipName_removeAllQueryItems, meth_QUrlQuery_removeAllQueryItems, METH_VARARGS, doc_QUrlQuery_removeAllQueryItems},
    {sipName_removeQueryItem, meth_QUrlQuery_removeQueryItem, METH_VARARGS, doc_QUrlQuery_removeQueryItem},
    {sipName_setQuery, meth_QUrlQuery_setQuery, METH_VARARGS, doc_QUrlQuery_setQuery},
    {sipName_setQueryDelimiters, meth_QUrlQuery_setQueryDelimiters, METH_VARARGS, doc_QUrlQuery_setQueryDelimiters},
    {sipName_setQueryItems, meth_QUrlQuery_setQueryItems, METH_VARARGS, doc_QUrlQuery_setQueryItems},
    {sipName_swap, meth_QUrlQuery_swap, METH_VARARGS, doc_QUrlQuery_swap},
    {sipName_toString, SIP_MLMETH_CAST(meth_QUrlQuery_toString), METH_VARARGS|METH_KEYWORDS, doc_QUrlQuery_toString}
};

PyDoc_STRVAR(doc_QUrlQuery, "\1QUrlQuery()\n"
"QUrlQuery(QUrl)\n"
"QUrlQuery(str)\n"
"QUrlQuery(QUrlQuery)");


static pyqt5ClassPluginDef plugin_QUrlQuery = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QUrlQuery = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QUrlQuery,
        SIP_NULLPTR,
        &plugin_QUrlQuery
    },
    {
        sipNameNr_QUrlQuery,
        {0, 0, 1},
        20, methods_QUrlQuery,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QUrlQuery,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QUrlQuery,
    init_type_QUrlQuery,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QUrlQuery,
    assign_QUrlQuery,
    array_QUrlQuery,
    copy_QUrlQuery,
    release_QUrlQuery,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};