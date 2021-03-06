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

#line 161 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTime.cpp"

#line 27 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTime.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTime.cpp"
#line 165 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qdatetime.sip"
#include <QHash>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTime.cpp"


PyDoc_STRVAR(doc_QTime_toPyTime, "toPyTime(self) -> datetime.time");

extern "C" {static PyObject *meth_QTime_toPyTime(PyObject *, PyObject *);}
static PyObject *meth_QTime_toPyTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 252 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qdatetime.sip"
        // Convert to a Python time object.
        sipTimeDef py_time;
        
        py_time.pt_hour = sipCpp->hour();
        py_time.pt_minute = sipCpp->minute();
        py_time.pt_second = sipCpp->second();
        py_time.pt_microsecond = sipCpp->msec() * 1000;
        
        sipRes = sipFromTime(&py_time);
#line 67 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTime.cpp"

            return sipRes;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_toPyTime, doc_QTime_toPyTime);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QTime_isNull(PyObject *, PyObject *);}
static PyObject *meth_QTime_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_isNull, doc_QTime_isNull);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_isValid, "isValid(self) -> bool\n"
"isValid(int, int, int, msec: int = 0) -> bool");

extern "C" {static PyObject *meth_QTime_isValid(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTime_isValid(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        int a1;
        int a2;
        int a3 = 0;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_msec,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "iii|i", &a0, &a1, &a2, &a3))
        {
            bool sipRes;

            sipRes =  ::QTime::isValid(a0,a1,a2,a3);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_isValid, doc_QTime_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_hour, "hour(self) -> int");

extern "C" {static PyObject *meth_QTime_hour(PyObject *, PyObject *);}
static PyObject *meth_QTime_hour(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->hour();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_hour, doc_QTime_hour);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_minute, "minute(self) -> int");

extern "C" {static PyObject *meth_QTime_minute(PyObject *, PyObject *);}
static PyObject *meth_QTime_minute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->minute();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_minute, doc_QTime_minute);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_second, "second(self) -> int");

extern "C" {static PyObject *meth_QTime_second(PyObject *, PyObject *);}
static PyObject *meth_QTime_second(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->second();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_second, doc_QTime_second);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_msec, "msec(self) -> int");

extern "C" {static PyObject *meth_QTime_msec(PyObject *, PyObject *);}
static PyObject *meth_QTime_msec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->msec();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_msec, doc_QTime_msec);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_toString, "toString(self, format: Qt.DateFormat = Qt.TextDate) -> str\n"
"toString(self, str) -> str");

extern "C" {static PyObject *meth_QTime_toString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTime_toString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::DateFormat a0 = Qt::TextDate;
        const  ::QTime *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|E", &sipSelf, sipType_QTime, &sipCpp, sipType_Qt_DateFormat, &a0))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->toString(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QTime *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "BJ1", &sipSelf, sipType_QTime, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->toString(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_toString, doc_QTime_toString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_setHMS, "setHMS(self, int, int, int, msec: int = 0) -> bool");

extern "C" {static PyObject *meth_QTime_setHMS(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTime_setHMS(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        int a1;
        int a2;
        int a3 = 0;
         ::QTime *sipCpp;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_msec,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Biii|i", &sipSelf, sipType_QTime, &sipCpp, &a0, &a1, &a2, &a3))
        {
            bool sipRes;

            sipRes = sipCpp->setHMS(a0,a1,a2,a3);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_setHMS, doc_QTime_setHMS);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_addSecs, "addSecs(self, int) -> QTime");

extern "C" {static PyObject *meth_QTime_addSecs(PyObject *, PyObject *);}
static PyObject *meth_QTime_addSecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTime, &sipCpp, &a0))
        {
             ::QTime*sipRes;

            sipRes = new  ::QTime(sipCpp->addSecs(a0));

            return sipConvertFromNewType(sipRes,sipType_QTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_addSecs, doc_QTime_addSecs);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_secsTo, "secsTo(self, Union[QTime, datetime.time]) -> int");

extern "C" {static PyObject *meth_QTime_secsTo(PyObject *, PyObject *);}
static PyObject *meth_QTime_secsTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTime, &sipCpp, sipType_QTime, &a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->secsTo(*a0);
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_secsTo, doc_QTime_secsTo);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_addMSecs, "addMSecs(self, int) -> QTime");

extern "C" {static PyObject *meth_QTime_addMSecs(PyObject *, PyObject *);}
static PyObject *meth_QTime_addMSecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTime, &sipCpp, &a0))
        {
             ::QTime*sipRes;

            sipRes = new  ::QTime(sipCpp->addMSecs(a0));

            return sipConvertFromNewType(sipRes,sipType_QTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_addMSecs, doc_QTime_addMSecs);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_msecsTo, "msecsTo(self, Union[QTime, datetime.time]) -> int");

extern "C" {static PyObject *meth_QTime_msecsTo(PyObject *, PyObject *);}
static PyObject *meth_QTime_msecsTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTime, &sipCpp, sipType_QTime, &a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->msecsTo(*a0);
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_msecsTo, doc_QTime_msecsTo);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_currentTime, "currentTime() -> QTime");

extern "C" {static PyObject *meth_QTime_currentTime(PyObject *, PyObject *);}
static PyObject *meth_QTime_currentTime(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QTime*sipRes;

            sipRes = new  ::QTime( ::QTime::currentTime());

            return sipConvertFromNewType(sipRes,sipType_QTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_currentTime, doc_QTime_currentTime);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_fromString, "fromString(str, format: Qt.DateFormat = Qt.TextDate) -> QTime\n"
"fromString(str, str) -> QTime");

extern "C" {static PyObject *meth_QTime_fromString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTime_fromString(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::Qt::DateFormat a1 = Qt::TextDate;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1|E", sipType_QString,&a0, &a0State, sipType_Qt_DateFormat, &a1))
        {
             ::QTime*sipRes;

            sipRes = new  ::QTime( ::QTime::fromString(*a0,a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTime,SIP_NULLPTR);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
             ::QTime*sipRes;

            sipRes = new  ::QTime( ::QTime::fromString(*a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_fromString, doc_QTime_fromString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_start, "start(self)");

extern "C" {static PyObject *meth_QTime_start(PyObject *, PyObject *);}
static PyObject *meth_QTime_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            sipCpp->start();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_start, doc_QTime_start);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_restart, "restart(self) -> int");

extern "C" {static PyObject *meth_QTime_restart(PyObject *, PyObject *);}
static PyObject *meth_QTime_restart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->restart();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_restart, doc_QTime_restart);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_elapsed, "elapsed(self) -> int");

extern "C" {static PyObject *meth_QTime_elapsed(PyObject *, PyObject *);}
static PyObject *meth_QTime_elapsed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->elapsed();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_elapsed, doc_QTime_elapsed);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_fromMSecsSinceStartOfDay, "fromMSecsSinceStartOfDay(int) -> QTime");

extern "C" {static PyObject *meth_QTime_fromMSecsSinceStartOfDay(PyObject *, PyObject *);}
static PyObject *meth_QTime_fromMSecsSinceStartOfDay(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
             ::QTime*sipRes;

            sipRes = new  ::QTime( ::QTime::fromMSecsSinceStartOfDay(a0));

            return sipConvertFromNewType(sipRes,sipType_QTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_fromMSecsSinceStartOfDay, doc_QTime_fromMSecsSinceStartOfDay);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTime_msecsSinceStartOfDay, "msecsSinceStartOfDay(self) -> int");

extern "C" {static PyObject *meth_QTime_msecsSinceStartOfDay(PyObject *, PyObject *);}
static PyObject *meth_QTime_msecsSinceStartOfDay(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->msecsSinceStartOfDay();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTime, sipName_msecsSinceStartOfDay, doc_QTime_msecsSinceStartOfDay);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QTime___ge__(PyObject *,PyObject *);}
static PyObject *slot_QTime___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QTime::operator>=(*a0);
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ge_slot, sipType_QTime, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTime___gt__(PyObject *,PyObject *);}
static PyObject *slot_QTime___gt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QTime::operator>(*a0);
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, gt_slot, sipType_QTime, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTime___le__(PyObject *,PyObject *);}
static PyObject *slot_QTime___le__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QTime::operator<=(*a0);
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, le_slot, sipType_QTime, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTime___lt__(PyObject *,PyObject *);}
static PyObject *slot_QTime___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QTime::operator<(*a0);
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, lt_slot, sipType_QTime, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTime___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTime___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QTime::operator!=(*a0);
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QTime, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTime___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTime___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QTime::operator==(*a0);
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QTime, sipSelf, sipArg);
}


extern "C" {static int slot_QTime___bool__(PyObject *);}
static int slot_QTime___bool__(PyObject *sipSelf)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 266 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qdatetime.sip"
        sipRes = !sipCpp->isNull();
#line 903 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTime.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static long slot_QTime___hash__(PyObject *);}
static long slot_QTime___hash__(PyObject *sipSelf)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 247 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qdatetime.sip"
        sipRes = qHash(sipCpp->toString(Qt::ISODate));
#line 928 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTime.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTime___repr__(PyObject *);}
static PyObject *slot_QTime___repr__(PyObject *sipSelf)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 201 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qdatetime.sip"
        if (sipCpp->isNull())
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromString("PyQt5.QtCore.QTime()");
        #else
            sipRes = PyString_FromString("PyQt5.QtCore.QTime()");
        #endif
        }
        else
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt5.QtCore.QTime(%i, %i", sipCpp->hour(),
                    sipCpp->minute());
        
            if (sipCpp->second() || sipCpp->msec())
            {
                qpycore_Unicode_ConcatAndDel(&sipRes,
                        PyUnicode_FromFormat(", %i", sipCpp->second()));
        
                if (sipCpp->msec())
                    qpycore_Unicode_ConcatAndDel(&sipRes,
                            PyUnicode_FromFormat(", %i", sipCpp->msec()));
            }
        
            qpycore_Unicode_ConcatAndDel(&sipRes, PyUnicode_FromString(")"));
        #else
            sipRes = PyString_FromFormat("PyQt5.QtCore.QTime(%i, %i", sipCpp->hour(),
                    sipCpp->minute());
        
            if (sipCpp->second() || sipCpp->msec())
            {
                PyString_ConcatAndDel(&sipRes,
                        PyString_FromFormat(", %i", sipCpp->second()));
        
                if (sipCpp->msec())
                    PyString_ConcatAndDel(&sipRes,
                            PyString_FromFormat(", %i", sipCpp->msec()));
            }
        
            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
        }
#line 994 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTime.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTime(void *, int);}
static void release_QTime(void *sipCppV, int)
{
    delete reinterpret_cast< ::QTime *>(sipCppV);
}


extern "C" {static PyObject *pickle_QTime(void *);}
static PyObject *pickle_QTime(void *sipCppV)
{
     ::QTime *sipCpp = reinterpret_cast< ::QTime *>(sipCppV);
    PyObject *sipRes;

#line 193 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qdatetime.sip"
    sipRes = Py_BuildValue((char *)"iiii", sipCpp->hour(), sipCpp->minute(), sipCpp->second(), sipCpp->msec());
#line 1020 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTime.cpp"

    return sipRes;
}


extern "C" {static void *array_QTime(Py_ssize_t);}
static void *array_QTime(Py_ssize_t sipNrElem)
{
    return new  ::QTime[sipNrElem];
}


extern "C" {static void assign_QTime(void *, Py_ssize_t, void *);}
static void assign_QTime(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTime *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTime *>(sipSrc);
}


extern "C" {static void *copy_QTime(const void *, Py_ssize_t);}
static void *copy_QTime(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QTime(reinterpret_cast<const  ::QTime *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTime(sipSimpleWrapper *);}
static void dealloc_QTime(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTime(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTime(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTime(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTime *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QTime();

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        int a2 = 0;
        int a3 = 0;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_second,
            sipName_msec,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "ii|ii", &a0, &a1, &a2, &a3))
        {
            sipCpp = new  ::QTime(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const  ::QTime* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QTime, &a0, &a0State))
        {
            sipCpp = new  ::QTime(*a0);
            sipReleaseType(const_cast< ::QTime *>(a0),sipType_QTime,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QTime(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTime(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QTime **sipCppPtr = reinterpret_cast< ::QTime **>(sipCppPtrV);

#line 169 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qdatetime.sip"
// Allow a Python time object whenever a QTime is expected.

if (sipIsErr == NULL)
    return (sipGetTime(sipPy, 0) ||
            sipCanConvertToType(sipPy, sipType_QTime, SIP_NO_CONVERTORS));

sipTimeDef py_time;

if (sipGetTime(sipPy, &py_time))
{
    *sipCppPtr = new QTime(py_time.pt_hour,
                           py_time.pt_minute,
                           py_time.pt_second,
                           py_time.pt_microsecond / 1000);

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTime *>(sipConvertToType(sipPy, sipType_QTime, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 1136 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTime.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTime[] = {
    {(void *)slot_QTime___ge__, ge_slot},
    {(void *)slot_QTime___gt__, gt_slot},
    {(void *)slot_QTime___le__, le_slot},
    {(void *)slot_QTime___lt__, lt_slot},
    {(void *)slot_QTime___ne__, ne_slot},
    {(void *)slot_QTime___eq__, eq_slot},
    {(void *)slot_QTime___bool__, bool_slot},
    {(void *)slot_QTime___hash__, hash_slot},
    {(void *)slot_QTime___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTime[] = {
    {sipName_addMSecs, meth_QTime_addMSecs, METH_VARARGS, doc_QTime_addMSecs},
    {sipName_addSecs, meth_QTime_addSecs, METH_VARARGS, doc_QTime_addSecs},
    {sipName_currentTime, meth_QTime_currentTime, METH_VARARGS, doc_QTime_currentTime},
    {sipName_elapsed, meth_QTime_elapsed, METH_VARARGS, doc_QTime_elapsed},
    {sipName_fromMSecsSinceStartOfDay, meth_QTime_fromMSecsSinceStartOfDay, METH_VARARGS, doc_QTime_fromMSecsSinceStartOfDay},
    {sipName_fromString, SIP_MLMETH_CAST(meth_QTime_fromString), METH_VARARGS|METH_KEYWORDS, doc_QTime_fromString},
    {sipName_hour, meth_QTime_hour, METH_VARARGS, doc_QTime_hour},
    {sipName_isNull, meth_QTime_isNull, METH_VARARGS, doc_QTime_isNull},
    {sipName_isValid, SIP_MLMETH_CAST(meth_QTime_isValid), METH_VARARGS|METH_KEYWORDS, doc_QTime_isValid},
    {sipName_minute, meth_QTime_minute, METH_VARARGS, doc_QTime_minute},
    {sipName_msec, meth_QTime_msec, METH_VARARGS, doc_QTime_msec},
    {sipName_msecsSinceStartOfDay, meth_QTime_msecsSinceStartOfDay, METH_VARARGS, doc_QTime_msecsSinceStartOfDay},
    {sipName_msecsTo, meth_QTime_msecsTo, METH_VARARGS, doc_QTime_msecsTo},
    {sipName_restart, meth_QTime_restart, METH_VARARGS, doc_QTime_restart},
    {sipName_second, meth_QTime_second, METH_VARARGS, doc_QTime_second},
    {sipName_secsTo, meth_QTime_secsTo, METH_VARARGS, doc_QTime_secsTo},
    {sipName_setHMS, SIP_MLMETH_CAST(meth_QTime_setHMS), METH_VARARGS|METH_KEYWORDS, doc_QTime_setHMS},
    {sipName_start, meth_QTime_start, METH_VARARGS, doc_QTime_start},
    {sipName_toPyTime, meth_QTime_toPyTime, METH_VARARGS, doc_QTime_toPyTime},
    {sipName_toString, SIP_MLMETH_CAST(meth_QTime_toString), METH_VARARGS|METH_KEYWORDS, doc_QTime_toString}
};

PyDoc_STRVAR(doc_QTime, "\1QTime()\n"
"QTime(int, int, second: int = 0, msec: int = 0)\n"
"QTime(QTime)");


static pyqt5ClassPluginDef plugin_QTime = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QTime = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTime,
        SIP_NULLPTR,
        &plugin_QTime
    },
    {
        sipNameNr_QTime,
        {0, 0, 1},
        20, methods_QTime,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QTime,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QTime,
    init_type_QTime,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QTime,
    assign_QTime,
    array_QTime,
    copy_QTime,
    release_QTime,
    SIP_NULLPTR,
    convertTo_QTime,
    SIP_NULLPTR,
    SIP_NULLPTR,
    pickle_QTime,
    SIP_NULLPTR,
    SIP_NULLPTR
};
