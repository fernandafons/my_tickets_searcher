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

#include "sipAPIQtGui.h"

#line 717 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 724 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 31 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"

#line 97 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 35 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 913 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 38 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 28 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 41 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 44 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 717 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 724 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 49 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qvector2d.sip"
#include <qvector2d.h>
#line 52 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 164 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 55 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 58 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_id, "id(self) -> int");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_id(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_id(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->id();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_id, doc_QTouchEvent_TouchPoint_id);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_state, "state(self) -> Qt.TouchPointState");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_state(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::Qt::TouchPointState sipRes;

            sipRes = sipCpp->state();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_TouchPointState);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_state, doc_QTouchEvent_TouchPoint_state);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_pos, "pos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_pos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_pos, doc_QTouchEvent_TouchPoint_pos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_startPos, "startPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_startPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_startPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->startPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_startPos, doc_QTouchEvent_TouchPoint_startPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_lastPos, "lastPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_lastPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_lastPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->lastPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_lastPos, doc_QTouchEvent_TouchPoint_lastPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_scenePos, "scenePos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->scenePos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_scenePos, doc_QTouchEvent_TouchPoint_scenePos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_startScenePos, "startScenePos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_startScenePos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_startScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->startScenePos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_startScenePos, doc_QTouchEvent_TouchPoint_startScenePos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_lastScenePos, "lastScenePos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_lastScenePos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_lastScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->lastScenePos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_lastScenePos, doc_QTouchEvent_TouchPoint_lastScenePos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_screenPos, "screenPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->screenPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_screenPos, doc_QTouchEvent_TouchPoint_screenPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_startScreenPos, "startScreenPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_startScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_startScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->startScreenPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_startScreenPos, doc_QTouchEvent_TouchPoint_startScreenPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_lastScreenPos, "lastScreenPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_lastScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_lastScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->lastScreenPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_lastScreenPos, doc_QTouchEvent_TouchPoint_lastScreenPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_normalizedPos, "normalizedPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_normalizedPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_normalizedPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->normalizedPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_normalizedPos, doc_QTouchEvent_TouchPoint_normalizedPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_startNormalizedPos, "startNormalizedPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_startNormalizedPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_startNormalizedPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->startNormalizedPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_startNormalizedPos, doc_QTouchEvent_TouchPoint_startNormalizedPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_lastNormalizedPos, "lastNormalizedPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_lastNormalizedPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_lastNormalizedPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->lastNormalizedPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_lastNormalizedPos, doc_QTouchEvent_TouchPoint_lastNormalizedPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_rect, "rect(self) -> QRectF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_rect(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_rect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QRectF*sipRes;

            sipRes = new  ::QRectF(sipCpp->rect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_rect, doc_QTouchEvent_TouchPoint_rect);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_sceneRect, "sceneRect(self) -> QRectF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_sceneRect(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_sceneRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QRectF*sipRes;

            sipRes = new  ::QRectF(sipCpp->sceneRect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_sceneRect, doc_QTouchEvent_TouchPoint_sceneRect);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_screenRect, "screenRect(self) -> QRectF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_screenRect(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_screenRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QRectF*sipRes;

            sipRes = new  ::QRectF(sipCpp->screenRect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_screenRect, doc_QTouchEvent_TouchPoint_screenRect);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_pressure, "pressure(self) -> float");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_pressure(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_pressure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->pressure();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_pressure, doc_QTouchEvent_TouchPoint_pressure);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_velocity, "velocity(self) -> QVector2D");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_velocity(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_velocity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QVector2D*sipRes;

            sipRes = new  ::QVector2D(sipCpp->velocity());

            return sipConvertFromNewType(sipRes,sipType_QVector2D,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_velocity, doc_QTouchEvent_TouchPoint_velocity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_flags, "flags(self) -> QTouchEvent.TouchPoint.InfoFlags");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_flags(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QTouchEvent::TouchPoint::InfoFlags*sipRes;

            sipRes = new  ::QTouchEvent::TouchPoint::InfoFlags(sipCpp->flags());

            return sipConvertFromNewType(sipRes,sipType_QTouchEvent_TouchPoint_InfoFlags,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_flags, doc_QTouchEvent_TouchPoint_flags);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_rawScreenPositions, "rawScreenPositions(self) -> List[QPointF]");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_rawScreenPositions(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_rawScreenPositions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QVector< ::QPointF>*sipRes;

            sipRes = new QVector< ::QPointF>(sipCpp->rawScreenPositions());

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_rawScreenPositions, doc_QTouchEvent_TouchPoint_rawScreenPositions);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_uniqueId, "uniqueId(self) -> QPointingDeviceUniqueId");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_uniqueId(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_uniqueId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QPointingDeviceUniqueId*sipRes;

            sipRes = new  ::QPointingDeviceUniqueId(sipCpp->uniqueId());

            return sipConvertFromNewType(sipRes,sipType_QPointingDeviceUniqueId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_uniqueId, doc_QTouchEvent_TouchPoint_uniqueId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_rotation, "rotation(self) -> float");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_rotation(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_rotation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->rotation();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_rotation, doc_QTouchEvent_TouchPoint_rotation);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_ellipseDiameters, "ellipseDiameters(self) -> QSizeF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_ellipseDiameters(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_ellipseDiameters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
             ::QSizeF*sipRes;

            sipRes = new  ::QSizeF(sipCpp->ellipseDiameters());

            return sipConvertFromNewType(sipRes,sipType_QSizeF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_ellipseDiameters, doc_QTouchEvent_TouchPoint_ellipseDiameters);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTouchEvent_TouchPoint(void *, int);}
static void release_QTouchEvent_TouchPoint(void *sipCppV, int)
{
    delete reinterpret_cast< ::QTouchEvent::TouchPoint *>(sipCppV);
}


extern "C" {static void dealloc_QTouchEvent_TouchPoint(sipSimpleWrapper *);}
static void dealloc_QTouchEvent_TouchPoint(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTouchEvent_TouchPoint(sipGetAddress(sipSelf), 0);
    }
}


static PyMethodDef methods_QTouchEvent_TouchPoint[] = {
    {sipName_ellipseDiameters, meth_QTouchEvent_TouchPoint_ellipseDiameters, METH_VARARGS, doc_QTouchEvent_TouchPoint_ellipseDiameters},
    {sipName_flags, meth_QTouchEvent_TouchPoint_flags, METH_VARARGS, doc_QTouchEvent_TouchPoint_flags},
    {sipName_id, meth_QTouchEvent_TouchPoint_id, METH_VARARGS, doc_QTouchEvent_TouchPoint_id},
    {sipName_lastNormalizedPos, meth_QTouchEvent_TouchPoint_lastNormalizedPos, METH_VARARGS, doc_QTouchEvent_TouchPoint_lastNormalizedPos},
    {sipName_lastPos, meth_QTouchEvent_TouchPoint_lastPos, METH_VARARGS, doc_QTouchEvent_TouchPoint_lastPos},
    {sipName_lastScenePos, meth_QTouchEvent_TouchPoint_lastScenePos, METH_VARARGS, doc_QTouchEvent_TouchPoint_lastScenePos},
    {sipName_lastScreenPos, meth_QTouchEvent_TouchPoint_lastScreenPos, METH_VARARGS, doc_QTouchEvent_TouchPoint_lastScreenPos},
    {sipName_normalizedPos, meth_QTouchEvent_TouchPoint_normalizedPos, METH_VARARGS, doc_QTouchEvent_TouchPoint_normalizedPos},
    {sipName_pos, meth_QTouchEvent_TouchPoint_pos, METH_VARARGS, doc_QTouchEvent_TouchPoint_pos},
    {sipName_pressure, meth_QTouchEvent_TouchPoint_pressure, METH_VARARGS, doc_QTouchEvent_TouchPoint_pressure},
    {sipName_rawScreenPositions, meth_QTouchEvent_TouchPoint_rawScreenPositions, METH_VARARGS, doc_QTouchEvent_TouchPoint_rawScreenPositions},
    {sipName_rect, meth_QTouchEvent_TouchPoint_rect, METH_VARARGS, doc_QTouchEvent_TouchPoint_rect},
    {sipName_rotation, meth_QTouchEvent_TouchPoint_rotation, METH_VARARGS, doc_QTouchEvent_TouchPoint_rotation},
    {sipName_scenePos, meth_QTouchEvent_TouchPoint_scenePos, METH_VARARGS, doc_QTouchEvent_TouchPoint_scenePos},
    {sipName_sceneRect, meth_QTouchEvent_TouchPoint_sceneRect, METH_VARARGS, doc_QTouchEvent_TouchPoint_sceneRect},
    {sipName_screenPos, meth_QTouchEvent_TouchPoint_screenPos, METH_VARARGS, doc_QTouchEvent_TouchPoint_screenPos},
    {sipName_screenRect, meth_QTouchEvent_TouchPoint_screenRect, METH_VARARGS, doc_QTouchEvent_TouchPoint_screenRect},
    {sipName_startNormalizedPos, meth_QTouchEvent_TouchPoint_startNormalizedPos, METH_VARARGS, doc_QTouchEvent_TouchPoint_startNormalizedPos},
    {sipName_startPos, meth_QTouchEvent_TouchPoint_startPos, METH_VARARGS, doc_QTouchEvent_TouchPoint_startPos},
    {sipName_startScenePos, meth_QTouchEvent_TouchPoint_startScenePos, METH_VARARGS, doc_QTouchEvent_TouchPoint_startScenePos},
    {sipName_startScreenPos, meth_QTouchEvent_TouchPoint_startScreenPos, METH_VARARGS, doc_QTouchEvent_TouchPoint_startScreenPos},
    {sipName_state, meth_QTouchEvent_TouchPoint_state, METH_VARARGS, doc_QTouchEvent_TouchPoint_state},
    {sipName_uniqueId, meth_QTouchEvent_TouchPoint_uniqueId, METH_VARARGS, doc_QTouchEvent_TouchPoint_uniqueId},
    {sipName_velocity, meth_QTouchEvent_TouchPoint_velocity, METH_VARARGS, doc_QTouchEvent_TouchPoint_velocity}
};

static sipEnumMemberDef enummembers_QTouchEvent_TouchPoint[] = {
    {sipName_Pen, static_cast<int>( ::QTouchEvent::TouchPoint::Pen), 352},
    {sipName_Token, static_cast<int>( ::QTouchEvent::TouchPoint::Token), 352},
};


static pyqt5ClassPluginDef plugin_QTouchEvent_TouchPoint = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QTouchEvent_TouchPoint = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTouchEvent__TouchPoint,
        SIP_NULLPTR,
        &plugin_QTouchEvent_TouchPoint
    },
    {
        sipNameNr_TouchPoint,
        {350, 255, 0},
        24, methods_QTouchEvent_TouchPoint,
        2, enummembers_QTouchEvent_TouchPoint,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QTouchEvent_TouchPoint,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QTouchEvent_TouchPoint,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
