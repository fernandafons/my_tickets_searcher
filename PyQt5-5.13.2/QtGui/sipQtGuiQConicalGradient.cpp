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

#line 392 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQConicalGradient.cpp"

#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQConicalGradient.cpp"
#line 123 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQConicalGradient.cpp"
#line 139 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#include <qpair.h>
#line 40 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQConicalGradient.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 43 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQConicalGradient.cpp"


PyDoc_STRVAR(doc_QConicalGradient_center, "center(self) -> QPointF");

extern "C" {static PyObject *meth_QConicalGradient_center(PyObject *, PyObject *);}
static PyObject *meth_QConicalGradient_center(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QConicalGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QConicalGradient, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->center());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QConicalGradient, sipName_center, doc_QConicalGradient_center);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QConicalGradient_angle, "angle(self) -> float");

extern "C" {static PyObject *meth_QConicalGradient_angle(PyObject *, PyObject *);}
static PyObject *meth_QConicalGradient_angle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QConicalGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QConicalGradient, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->angle();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QConicalGradient, sipName_angle, doc_QConicalGradient_angle);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QConicalGradient_setCenter, "setCenter(self, Union[QPointF, QPoint])\n"
"setCenter(self, float, float)");

extern "C" {static PyObject *meth_QConicalGradient_setCenter(PyObject *, PyObject *);}
static PyObject *meth_QConicalGradient_setCenter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPointF* a0;
        int a0State = 0;
         ::QConicalGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QConicalGradient, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            sipCpp->setCenter(*a0);
            sipReleaseType(const_cast< ::QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::qreal a0;
         ::qreal a1;
         ::QConicalGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QConicalGradient, &sipCpp, &a0, &a1))
        {
            sipCpp->setCenter(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QConicalGradient, sipName_setCenter, doc_QConicalGradient_setCenter);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QConicalGradient_setAngle, "setAngle(self, float)");

extern "C" {static PyObject *meth_QConicalGradient_setAngle(PyObject *, PyObject *);}
static PyObject *meth_QConicalGradient_setAngle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::qreal a0;
         ::QConicalGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QConicalGradient, &sipCpp, &a0))
        {
            sipCpp->setAngle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QConicalGradient, sipName_setAngle, doc_QConicalGradient_setAngle);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QConicalGradient(void *, const sipTypeDef *);}
static void *cast_QConicalGradient(void *sipCppV, const sipTypeDef *targetType)
{
     ::QConicalGradient *sipCpp = reinterpret_cast< ::QConicalGradient *>(sipCppV);

    if (targetType == sipType_QGradient)
        return static_cast< ::QGradient *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QConicalGradient(void *, int);}
static void release_QConicalGradient(void *sipCppV, int)
{
    delete reinterpret_cast< ::QConicalGradient *>(sipCppV);
}


extern "C" {static void *array_QConicalGradient(Py_ssize_t);}
static void *array_QConicalGradient(Py_ssize_t sipNrElem)
{
    return new  ::QConicalGradient[sipNrElem];
}


extern "C" {static void assign_QConicalGradient(void *, Py_ssize_t, void *);}
static void assign_QConicalGradient(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QConicalGradient *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QConicalGradient *>(sipSrc);
}


extern "C" {static void *copy_QConicalGradient(const void *, Py_ssize_t);}
static void *copy_QConicalGradient(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QConicalGradient(reinterpret_cast<const  ::QConicalGradient *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QConicalGradient(sipSimpleWrapper *);}
static void dealloc_QConicalGradient(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QConicalGradient(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QConicalGradient(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QConicalGradient(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QConicalGradient *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QConicalGradient();

            return sipCpp;
        }
    }

    {
        const  ::QPointF* a0;
        int a0State = 0;
         ::qreal a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1d", sipType_QPointF, &a0, &a0State, &a1))
        {
            sipCpp = new  ::QConicalGradient(*a0,a1);
            sipReleaseType(const_cast< ::QPointF *>(a0),sipType_QPointF,a0State);

            return sipCpp;
        }
    }

    {
         ::qreal a0;
         ::qreal a1;
         ::qreal a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "ddd", &a0, &a1, &a2))
        {
            sipCpp = new  ::QConicalGradient(a0,a1,a2);

            return sipCpp;
        }
    }

    {
        const  ::QConicalGradient* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QConicalGradient, &a0))
        {
            sipCpp = new  ::QConicalGradient(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QConicalGradient[] = {{49, 255, 1}};


static PyMethodDef methods_QConicalGradient[] = {
    {sipName_angle, meth_QConicalGradient_angle, METH_VARARGS, doc_QConicalGradient_angle},
    {sipName_center, meth_QConicalGradient_center, METH_VARARGS, doc_QConicalGradient_center},
    {sipName_setAngle, meth_QConicalGradient_setAngle, METH_VARARGS, doc_QConicalGradient_setAngle},
    {sipName_setCenter, meth_QConicalGradient_setCenter, METH_VARARGS, doc_QConicalGradient_setCenter}
};

PyDoc_STRVAR(doc_QConicalGradient, "\1QConicalGradient()\n"
"QConicalGradient(Union[QPointF, QPoint], float)\n"
"QConicalGradient(float, float, float)\n"
"QConicalGradient(QConicalGradient)");


static pyqt5ClassPluginDef plugin_QConicalGradient = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QConicalGradient = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QConicalGradient,
        SIP_NULLPTR,
        &plugin_QConicalGradient
    },
    {
        sipNameNr_QConicalGradient,
        {0, 0, 1},
        4, methods_QConicalGradient,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QConicalGradient,
    -1,
    -1,
    supers_QConicalGradient,
    SIP_NULLPTR,
    init_type_QConicalGradient,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QConicalGradient,
    assign_QConicalGradient,
    array_QConicalGradient,
    copy_QConicalGradient,
    release_QConicalGradient,
    cast_QConicalGradient,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
