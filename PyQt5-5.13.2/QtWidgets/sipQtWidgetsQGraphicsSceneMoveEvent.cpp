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

#include "sipAPIQtWidgets.h"

#line 240 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneMoveEvent.cpp"

#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneMoveEvent.cpp"
#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneMoveEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneMoveEvent.cpp"


class sipQGraphicsSceneMoveEvent : public  ::QGraphicsSceneMoveEvent
{
public:
    sipQGraphicsSceneMoveEvent();
    ~sipQGraphicsSceneMoveEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsSceneMoveEvent(const sipQGraphicsSceneMoveEvent &);
    sipQGraphicsSceneMoveEvent &operator = (const sipQGraphicsSceneMoveEvent &);
};

sipQGraphicsSceneMoveEvent::sipQGraphicsSceneMoveEvent():  ::QGraphicsSceneMoveEvent(), sipPySelf(SIP_NULLPTR)
{
}

sipQGraphicsSceneMoveEvent::~sipQGraphicsSceneMoveEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QGraphicsSceneMoveEvent_oldPos, "oldPos(self) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMoveEvent_oldPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMoveEvent_oldPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QGraphicsSceneMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMoveEvent, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->oldPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMoveEvent, sipName_oldPos, doc_QGraphicsSceneMoveEvent_oldPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QGraphicsSceneMoveEvent_newPos, "newPos(self) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMoveEvent_newPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMoveEvent_newPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QGraphicsSceneMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMoveEvent, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->newPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMoveEvent, sipName_newPos, doc_QGraphicsSceneMoveEvent_newPos);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QGraphicsSceneMoveEvent(void *, const sipTypeDef *);}
static void *cast_QGraphicsSceneMoveEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QGraphicsSceneMoveEvent *sipCpp = reinterpret_cast< ::QGraphicsSceneMoveEvent *>(sipCppV);

    if (targetType == sipType_QGraphicsSceneEvent)
        return static_cast< ::QGraphicsSceneEvent *>(sipCpp);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneMoveEvent(void *, int);}
static void release_QGraphicsSceneMoveEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGraphicsSceneMoveEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QGraphicsSceneMoveEvent *>(sipCppV);
}


extern "C" {static void *array_QGraphicsSceneMoveEvent(Py_ssize_t);}
static void *array_QGraphicsSceneMoveEvent(Py_ssize_t sipNrElem)
{
    return new  ::QGraphicsSceneMoveEvent[sipNrElem];
}


extern "C" {static void dealloc_QGraphicsSceneMoveEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneMoveEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQGraphicsSceneMoveEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGraphicsSceneMoveEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QGraphicsSceneMoveEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsSceneMoveEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQGraphicsSceneMoveEvent *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipQGraphicsSceneMoveEvent();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneMoveEvent[] = {{151, 255, 1}};


static PyMethodDef methods_QGraphicsSceneMoveEvent[] = {
    {sipName_newPos, meth_QGraphicsSceneMoveEvent_newPos, METH_VARARGS, doc_QGraphicsSceneMoveEvent_newPos},
    {sipName_oldPos, meth_QGraphicsSceneMoveEvent_oldPos, METH_VARARGS, doc_QGraphicsSceneMoveEvent_oldPos}
};

PyDoc_STRVAR(doc_QGraphicsSceneMoveEvent, "\1QGraphicsSceneMoveEvent()");


static pyqt5ClassPluginDef plugin_QGraphicsSceneMoveEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QGraphicsSceneMoveEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneMoveEvent,
        SIP_NULLPTR,
        &plugin_QGraphicsSceneMoveEvent
    },
    {
        sipNameNr_QGraphicsSceneMoveEvent,
        {0, 0, 1},
        2, methods_QGraphicsSceneMoveEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QGraphicsSceneMoveEvent,
    -1,
    -1,
    supers_QGraphicsSceneMoveEvent,
    SIP_NULLPTR,
    init_type_QGraphicsSceneMoveEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QGraphicsSceneMoveEvent,
    SIP_NULLPTR,
    array_QGraphicsSceneMoveEvent,
    SIP_NULLPTR,
    release_QGraphicsSceneMoveEvent,
    cast_QGraphicsSceneMoveEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
