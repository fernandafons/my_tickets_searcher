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

#line 1012 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionGraphicsItem.cpp"

#line 164 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionGraphicsItem.cpp"
#line 30 "sip/QtGui/qtransform.sip"
#include <qtransform.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionGraphicsItem.cpp"
#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionGraphicsItem.cpp"


PyDoc_STRVAR(doc_QStyleOptionGraphicsItem_levelOfDetailFromTransform, "levelOfDetailFromTransform(QTransform) -> float");

extern "C" {static PyObject *meth_QStyleOptionGraphicsItem_levelOfDetailFromTransform(PyObject *, PyObject *);}
static PyObject *meth_QStyleOptionGraphicsItem_levelOfDetailFromTransform(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTransform* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QTransform, &a0))
        {
             ::qreal sipRes;

            sipRes =  ::QStyleOptionGraphicsItem::levelOfDetailFromTransform(*a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QStyleOptionGraphicsItem, sipName_levelOfDetailFromTransform, doc_QStyleOptionGraphicsItem_levelOfDetailFromTransform);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionGraphicsItem(void *, const sipTypeDef *);}
static void *cast_QStyleOptionGraphicsItem(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionGraphicsItem *sipCpp = reinterpret_cast< ::QStyleOptionGraphicsItem *>(sipCppV);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionGraphicsItem(void *, int);}
static void release_QStyleOptionGraphicsItem(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleOptionGraphicsItem *>(sipCppV);
}


extern "C" {static void *array_QStyleOptionGraphicsItem(Py_ssize_t);}
static void *array_QStyleOptionGraphicsItem(Py_ssize_t sipNrElem)
{
    return new  ::QStyleOptionGraphicsItem[sipNrElem];
}


extern "C" {static void assign_QStyleOptionGraphicsItem(void *, Py_ssize_t, void *);}
static void assign_QStyleOptionGraphicsItem(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionGraphicsItem *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOptionGraphicsItem *>(sipSrc);
}


extern "C" {static void *copy_QStyleOptionGraphicsItem(const void *, Py_ssize_t);}
static void *copy_QStyleOptionGraphicsItem(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStyleOptionGraphicsItem(reinterpret_cast<const  ::QStyleOptionGraphicsItem *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionGraphicsItem(sipSimpleWrapper *);}
static void dealloc_QStyleOptionGraphicsItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionGraphicsItem(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionGraphicsItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionGraphicsItem(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionGraphicsItem *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QStyleOptionGraphicsItem();

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionGraphicsItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QStyleOptionGraphicsItem, &a0))
        {
            sipCpp = new  ::QStyleOptionGraphicsItem(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionGraphicsItem[] = {{312, 255, 1}};


static PyMethodDef methods_QStyleOptionGraphicsItem[] = {
    {sipName_levelOfDetailFromTransform, meth_QStyleOptionGraphicsItem_levelOfDetailFromTransform, METH_VARARGS, doc_QStyleOptionGraphicsItem_levelOfDetailFromTransform}
};

static sipEnumMemberDef enummembers_QStyleOptionGraphicsItem[] = {
    {sipName_Type, static_cast<int>( ::QStyleOptionGraphicsItem::Type), 339},
    {sipName_Version, static_cast<int>( ::QStyleOptionGraphicsItem::Version), 340},
};


extern "C" {static PyObject *varget_QStyleOptionGraphicsItem_exposedRect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGraphicsItem_exposedRect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QRectF*sipVal;
     ::QStyleOptionGraphicsItem *sipCpp = reinterpret_cast< ::QStyleOptionGraphicsItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -62);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->exposedRect;

    sipPy = sipConvertFromType(sipVal, sipType_QRectF, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -14, sipPySelf);
        sipKeepReference(sipPySelf, -62, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionGraphicsItem_exposedRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGraphicsItem_exposedRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QRectF*sipVal;
     ::QStyleOptionGraphicsItem *sipCpp = reinterpret_cast< ::QStyleOptionGraphicsItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QRectF *>(sipForceConvertToType(sipPy, sipType_QRectF, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->exposedRect = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionGraphicsItem[] = {
    {InstanceVariable, sipName_exposedRect, (PyMethodDef *)varget_QStyleOptionGraphicsItem_exposedRect, (PyMethodDef *)varset_QStyleOptionGraphicsItem_exposedRect, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_QStyleOptionGraphicsItem, "\1QStyleOptionGraphicsItem()\n"
"QStyleOptionGraphicsItem(QStyleOptionGraphicsItem)");


static pyqt5ClassPluginDef plugin_QStyleOptionGraphicsItem = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleOptionGraphicsItem = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionGraphicsItem,
        SIP_NULLPTR,
        &plugin_QStyleOptionGraphicsItem
    },
    {
        sipNameNr_QStyleOptionGraphicsItem,
        {0, 0, 1},
        1, methods_QStyleOptionGraphicsItem,
        2, enummembers_QStyleOptionGraphicsItem,
        1, variables_QStyleOptionGraphicsItem,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QStyleOptionGraphicsItem,
    -1,
    -1,
    supers_QStyleOptionGraphicsItem,
    SIP_NULLPTR,
    init_type_QStyleOptionGraphicsItem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QStyleOptionGraphicsItem,
    assign_QStyleOptionGraphicsItem,
    array_QStyleOptionGraphicsItem,
    copy_QStyleOptionGraphicsItem,
    release_QStyleOptionGraphicsItem,
    cast_QStyleOptionGraphicsItem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
