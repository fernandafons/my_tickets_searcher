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

#line 296 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTabletEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTabletEvent.cpp"
#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTabletEvent.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTabletEvent.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTabletEvent.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 45 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTabletEvent.cpp"
#line 26 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 48 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTabletEvent.cpp"


class sipQTabletEvent : public  ::QTabletEvent
{
public:
    sipQTabletEvent( ::QEvent::Type,const  ::QPointF&,const  ::QPointF&,int,int, ::qreal,int,int, ::qreal, ::qreal,int, ::Qt::KeyboardModifiers, ::qint64, ::Qt::MouseButton, ::Qt::MouseButtons);
    sipQTabletEvent( ::QEvent::Type,const  ::QPointF&,const  ::QPointF&,int,int, ::qreal,int,int, ::qreal, ::qreal,int, ::Qt::KeyboardModifiers, ::qint64);
    sipQTabletEvent(const  ::QTabletEvent&);
    ~sipQTabletEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTabletEvent(const sipQTabletEvent &);
    sipQTabletEvent &operator = (const sipQTabletEvent &);
};

sipQTabletEvent::sipQTabletEvent( ::QEvent::Type a0,const  ::QPointF& a1,const  ::QPointF& a2,int a3,int a4, ::qreal a5,int a6,int a7, ::qreal a8, ::qreal a9,int a10, ::Qt::KeyboardModifiers a11, ::qint64 a12, ::Qt::MouseButton a13, ::Qt::MouseButtons a14):  ::QTabletEvent(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14), sipPySelf(SIP_NULLPTR)
{
}

sipQTabletEvent::sipQTabletEvent( ::QEvent::Type a0,const  ::QPointF& a1,const  ::QPointF& a2,int a3,int a4, ::qreal a5,int a6,int a7, ::qreal a8, ::qreal a9,int a10, ::Qt::KeyboardModifiers a11, ::qint64 a12):  ::QTabletEvent(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12), sipPySelf(SIP_NULLPTR)
{
}

sipQTabletEvent::sipQTabletEvent(const  ::QTabletEvent& a0):  ::QTabletEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQTabletEvent::~sipQTabletEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QTabletEvent_pos, "pos(self) -> QPoint");

extern "C" {static PyObject *meth_QTabletEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_pos, doc_QTabletEvent_pos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_globalPos, "globalPos(self) -> QPoint");

extern "C" {static PyObject *meth_QTabletEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint(sipCpp->globalPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_globalPos, doc_QTabletEvent_globalPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_x, "x(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->x();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_x, doc_QTabletEvent_x);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_y, "y(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->y();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_y, doc_QTabletEvent_y);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_globalX, "globalX(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalX();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_globalX, doc_QTabletEvent_globalX);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_globalY, "globalY(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalY();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_globalY, doc_QTabletEvent_globalY);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_hiResGlobalX, "hiResGlobalX(self) -> float");

extern "C" {static PyObject *meth_QTabletEvent_hiResGlobalX(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_hiResGlobalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->hiResGlobalX();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_hiResGlobalX, doc_QTabletEvent_hiResGlobalX);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_hiResGlobalY, "hiResGlobalY(self) -> float");

extern "C" {static PyObject *meth_QTabletEvent_hiResGlobalY(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_hiResGlobalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->hiResGlobalY();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_hiResGlobalY, doc_QTabletEvent_hiResGlobalY);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_device, "device(self) -> QTabletEvent.TabletDevice");

extern "C" {static PyObject *meth_QTabletEvent_device(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_device(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::QTabletEvent::TabletDevice sipRes;

            sipRes = sipCpp->device();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QTabletEvent_TabletDevice);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_device, doc_QTabletEvent_device);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_pointerType, "pointerType(self) -> QTabletEvent.PointerType");

extern "C" {static PyObject *meth_QTabletEvent_pointerType(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_pointerType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::QTabletEvent::PointerType sipRes;

            sipRes = sipCpp->pointerType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QTabletEvent_PointerType);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_pointerType, doc_QTabletEvent_pointerType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_uniqueId, "uniqueId(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_uniqueId(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_uniqueId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::qint64 sipRes;

            sipRes = sipCpp->uniqueId();

            return PyLong_FromLongLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_uniqueId, doc_QTabletEvent_uniqueId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_pressure, "pressure(self) -> float");

extern "C" {static PyObject *meth_QTabletEvent_pressure(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_pressure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->pressure();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_pressure, doc_QTabletEvent_pressure);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_z, "z(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_z(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_z(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->z();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_z, doc_QTabletEvent_z);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_tangentialPressure, "tangentialPressure(self) -> float");

extern "C" {static PyObject *meth_QTabletEvent_tangentialPressure(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_tangentialPressure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->tangentialPressure();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_tangentialPressure, doc_QTabletEvent_tangentialPressure);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_rotation, "rotation(self) -> float");

extern "C" {static PyObject *meth_QTabletEvent_rotation(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_rotation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->rotation();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_rotation, doc_QTabletEvent_rotation);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_xTilt, "xTilt(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_xTilt(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_xTilt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->xTilt();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_xTilt, doc_QTabletEvent_xTilt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_yTilt, "yTilt(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_yTilt(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_yTilt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->yTilt();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_yTilt, doc_QTabletEvent_yTilt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_posF, "posF(self) -> QPointF");

extern "C" {static PyObject *meth_QTabletEvent_posF(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_posF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->posF());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_posF, doc_QTabletEvent_posF);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_globalPosF, "globalPosF(self) -> QPointF");

extern "C" {static PyObject *meth_QTabletEvent_globalPosF(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_globalPosF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->globalPosF());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_globalPosF, doc_QTabletEvent_globalPosF);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_button, "button(self) -> Qt.MouseButton");

extern "C" {static PyObject *meth_QTabletEvent_button(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_button(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::Qt::MouseButton sipRes;

            sipRes = sipCpp->button();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_MouseButton);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_button, doc_QTabletEvent_button);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTabletEvent_buttons, "buttons(self) -> Qt.MouseButtons");

extern "C" {static PyObject *meth_QTabletEvent_buttons(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
             ::Qt::MouseButtons*sipRes;

            sipRes = new  ::Qt::MouseButtons(sipCpp->buttons());

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_buttons, doc_QTabletEvent_buttons);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QTabletEvent(void *, const sipTypeDef *);}
static void *cast_QTabletEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QTabletEvent *sipCpp = reinterpret_cast< ::QTabletEvent *>(sipCppV);

    if (targetType == sipType_QInputEvent)
        return static_cast< ::QInputEvent *>(sipCpp);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTabletEvent(void *, int);}
static void release_QTabletEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTabletEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QTabletEvent *>(sipCppV);
}


extern "C" {static void assign_QTabletEvent(void *, Py_ssize_t, void *);}
static void assign_QTabletEvent(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTabletEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTabletEvent *>(sipSrc);
}


extern "C" {static void *copy_QTabletEvent(const void *, Py_ssize_t);}
static void *copy_QTabletEvent(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QTabletEvent(reinterpret_cast<const  ::QTabletEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTabletEvent(sipSimpleWrapper *);}
static void dealloc_QTabletEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQTabletEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTabletEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QTabletEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTabletEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTabletEvent *sipCpp = SIP_NULLPTR;

    {
         ::QEvent::Type a0;
        const  ::QPointF* a1;
        int a1State = 0;
        const  ::QPointF* a2;
        int a2State = 0;
        int a3;
        int a4;
         ::qreal a5;
        int a6;
        int a7;
         ::qreal a8;
         ::qreal a9;
        int a10;
         ::Qt::KeyboardModifiers* a11;
        int a11State = 0;
         ::qint64 a12;
         ::Qt::MouseButton a13;
         ::Qt::MouseButtons* a14;
        int a14State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "EJ1J1iidiiddiJ1nEJ1", sipType_QEvent_Type, &a0, sipType_QPointF, &a1, &a1State, sipType_QPointF, &a2, &a2State, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, sipType_Qt_KeyboardModifiers, &a11, &a11State, &a12, sipType_Qt_MouseButton, &a13, sipType_Qt_MouseButtons, &a14, &a14State))
        {
            sipCpp = new sipQTabletEvent(a0,*a1,*a2,a3,a4,a5,a6,a7,a8,a9,a10,*a11,a12,a13,*a14);
            sipReleaseType(const_cast< ::QPointF *>(a1),sipType_QPointF,a1State);
            sipReleaseType(const_cast< ::QPointF *>(a2),sipType_QPointF,a2State);
            sipReleaseType(a11,sipType_Qt_KeyboardModifiers,a11State);
            sipReleaseType(a14,sipType_Qt_MouseButtons,a14State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::QEvent::Type a0;
        const  ::QPointF* a1;
        int a1State = 0;
        const  ::QPointF* a2;
        int a2State = 0;
        int a3;
        int a4;
         ::qreal a5;
        int a6;
        int a7;
         ::qreal a8;
         ::qreal a9;
        int a10;
         ::Qt::KeyboardModifiers* a11;
        int a11State = 0;
         ::qint64 a12;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "EJ1J1iidiiddiJ1n", sipType_QEvent_Type, &a0, sipType_QPointF, &a1, &a1State, sipType_QPointF, &a2, &a2State, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, sipType_Qt_KeyboardModifiers, &a11, &a11State, &a12))
        {
            sipCpp = new sipQTabletEvent(a0,*a1,*a2,a3,a4,a5,a6,a7,a8,a9,a10,*a11,a12);
            sipReleaseType(const_cast< ::QPointF *>(a1),sipType_QPointF,a1State);
            sipReleaseType(const_cast< ::QPointF *>(a2),sipType_QPointF,a2State);
            sipReleaseType(a11,sipType_Qt_KeyboardModifiers,a11State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QTabletEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QTabletEvent, &a0))
        {
            sipCpp = new sipQTabletEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTabletEvent[] = {{77, 255, 1}};


static PyMethodDef methods_QTabletEvent[] = {
    {sipName_button, meth_QTabletEvent_button, METH_VARARGS, doc_QTabletEvent_button},
    {sipName_buttons, meth_QTabletEvent_buttons, METH_VARARGS, doc_QTabletEvent_buttons},
    {sipName_device, meth_QTabletEvent_device, METH_VARARGS, doc_QTabletEvent_device},
    {sipName_globalPos, meth_QTabletEvent_globalPos, METH_VARARGS, doc_QTabletEvent_globalPos},
    {sipName_globalPosF, meth_QTabletEvent_globalPosF, METH_VARARGS, doc_QTabletEvent_globalPosF},
    {sipName_globalX, meth_QTabletEvent_globalX, METH_VARARGS, doc_QTabletEvent_globalX},
    {sipName_globalY, meth_QTabletEvent_globalY, METH_VARARGS, doc_QTabletEvent_globalY},
    {sipName_hiResGlobalX, meth_QTabletEvent_hiResGlobalX, METH_VARARGS, doc_QTabletEvent_hiResGlobalX},
    {sipName_hiResGlobalY, meth_QTabletEvent_hiResGlobalY, METH_VARARGS, doc_QTabletEvent_hiResGlobalY},
    {sipName_pointerType, meth_QTabletEvent_pointerType, METH_VARARGS, doc_QTabletEvent_pointerType},
    {sipName_pos, meth_QTabletEvent_pos, METH_VARARGS, doc_QTabletEvent_pos},
    {sipName_posF, meth_QTabletEvent_posF, METH_VARARGS, doc_QTabletEvent_posF},
    {sipName_pressure, meth_QTabletEvent_pressure, METH_VARARGS, doc_QTabletEvent_pressure},
    {sipName_rotation, meth_QTabletEvent_rotation, METH_VARARGS, doc_QTabletEvent_rotation},
    {sipName_tangentialPressure, meth_QTabletEvent_tangentialPressure, METH_VARARGS, doc_QTabletEvent_tangentialPressure},
    {sipName_uniqueId, meth_QTabletEvent_uniqueId, METH_VARARGS, doc_QTabletEvent_uniqueId},
    {sipName_x, meth_QTabletEvent_x, METH_VARARGS, doc_QTabletEvent_x},
    {sipName_xTilt, meth_QTabletEvent_xTilt, METH_VARARGS, doc_QTabletEvent_xTilt},
    {sipName_y, meth_QTabletEvent_y, METH_VARARGS, doc_QTabletEvent_y},
    {sipName_yTilt, meth_QTabletEvent_yTilt, METH_VARARGS, doc_QTabletEvent_yTilt},
    {sipName_z, meth_QTabletEvent_z, METH_VARARGS, doc_QTabletEvent_z}
};

static sipEnumMemberDef enummembers_QTabletEvent[] = {
    {sipName_Airbrush, static_cast<int>( ::QTabletEvent::Airbrush), 283},
    {sipName_Cursor, static_cast<int>( ::QTabletEvent::Cursor), 282},
    {sipName_Eraser, static_cast<int>( ::QTabletEvent::Eraser), 282},
    {sipName_FourDMouse, static_cast<int>( ::QTabletEvent::FourDMouse), 283},
    {sipName_NoDevice, static_cast<int>( ::QTabletEvent::NoDevice), 283},
    {sipName_Pen, static_cast<int>( ::QTabletEvent::Pen), 282},
    {sipName_Puck, static_cast<int>( ::QTabletEvent::Puck), 283},
    {sipName_RotationStylus, static_cast<int>( ::QTabletEvent::RotationStylus), 283},
    {sipName_Stylus, static_cast<int>( ::QTabletEvent::Stylus), 283},
    {sipName_UnknownPointer, static_cast<int>( ::QTabletEvent::UnknownPointer), 282},
    {sipName_XFreeEraser, static_cast<int>( ::QTabletEvent::XFreeEraser), 283},
};

PyDoc_STRVAR(doc_QTabletEvent, "\1QTabletEvent(QEvent.Type, Union[QPointF, QPoint], Union[QPointF, QPoint], int, int, float, int, int, float, float, int, Union[Qt.KeyboardModifiers, Qt.KeyboardModifier], int, Qt.MouseButton, Union[Qt.MouseButtons, Qt.MouseButton])\n"
"QTabletEvent(QEvent.Type, Union[QPointF, QPoint], Union[QPointF, QPoint], int, int, float, int, int, float, float, int, Union[Qt.KeyboardModifiers, Qt.KeyboardModifier], int)\n"
"QTabletEvent(QTabletEvent)");


static pyqt5ClassPluginDef plugin_QTabletEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QTabletEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTabletEvent,
        SIP_NULLPTR,
        &plugin_QTabletEvent
    },
    {
        sipNameNr_QTabletEvent,
        {0, 0, 1},
        21, methods_QTabletEvent,
        11, enummembers_QTabletEvent,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QTabletEvent,
    -1,
    -1,
    supers_QTabletEvent,
    SIP_NULLPTR,
    init_type_QTabletEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QTabletEvent,
    assign_QTabletEvent,
    SIP_NULLPTR,
    copy_QTabletEvent,
    release_QTabletEvent,
    cast_QTabletEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};