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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 374 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 31 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQPagedPaintDeviceMargins.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QPagedPaintDevice_Margins(void *, int);}
static void release_QPagedPaintDevice_Margins(void *sipCppV, int)
{
    delete reinterpret_cast< ::QPagedPaintDevice::Margins *>(sipCppV);
}


extern "C" {static void *array_QPagedPaintDevice_Margins(Py_ssize_t);}
static void *array_QPagedPaintDevice_Margins(Py_ssize_t sipNrElem)
{
    return new  ::QPagedPaintDevice::Margins[sipNrElem];
}


extern "C" {static void assign_QPagedPaintDevice_Margins(void *, Py_ssize_t, void *);}
static void assign_QPagedPaintDevice_Margins(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPagedPaintDevice::Margins *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPagedPaintDevice::Margins *>(sipSrc);
}


extern "C" {static void *copy_QPagedPaintDevice_Margins(const void *, Py_ssize_t);}
static void *copy_QPagedPaintDevice_Margins(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QPagedPaintDevice::Margins(reinterpret_cast<const  ::QPagedPaintDevice::Margins *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPagedPaintDevice_Margins(sipSimpleWrapper *);}
static void dealloc_QPagedPaintDevice_Margins(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPagedPaintDevice_Margins(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPagedPaintDevice_Margins(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPagedPaintDevice_Margins(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPagedPaintDevice::Margins *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QPagedPaintDevice::Margins();

            return sipCpp;
        }
    }

    {
        const  ::QPagedPaintDevice::Margins* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QPagedPaintDevice_Margins, &a0))
        {
            sipCpp = new  ::QPagedPaintDevice::Margins(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static PyObject *varget_QPagedPaintDevice_Margins_bottom(void *, PyObject *, PyObject *);}
static PyObject *varget_QPagedPaintDevice_Margins_bottom(void *sipSelf, PyObject *, PyObject *)
{
     ::qreal sipVal;
     ::QPagedPaintDevice::Margins *sipCpp = reinterpret_cast< ::QPagedPaintDevice::Margins *>(sipSelf);

    sipVal = sipCpp->bottom;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPagedPaintDevice_Margins_bottom(void *, PyObject *, PyObject *);}
static int varset_QPagedPaintDevice_Margins_bottom(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::qreal sipVal;
     ::QPagedPaintDevice::Margins *sipCpp = reinterpret_cast< ::QPagedPaintDevice::Margins *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->bottom = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPagedPaintDevice_Margins_left(void *, PyObject *, PyObject *);}
static PyObject *varget_QPagedPaintDevice_Margins_left(void *sipSelf, PyObject *, PyObject *)
{
     ::qreal sipVal;
     ::QPagedPaintDevice::Margins *sipCpp = reinterpret_cast< ::QPagedPaintDevice::Margins *>(sipSelf);

    sipVal = sipCpp->left;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPagedPaintDevice_Margins_left(void *, PyObject *, PyObject *);}
static int varset_QPagedPaintDevice_Margins_left(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::qreal sipVal;
     ::QPagedPaintDevice::Margins *sipCpp = reinterpret_cast< ::QPagedPaintDevice::Margins *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->left = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPagedPaintDevice_Margins_right(void *, PyObject *, PyObject *);}
static PyObject *varget_QPagedPaintDevice_Margins_right(void *sipSelf, PyObject *, PyObject *)
{
     ::qreal sipVal;
     ::QPagedPaintDevice::Margins *sipCpp = reinterpret_cast< ::QPagedPaintDevice::Margins *>(sipSelf);

    sipVal = sipCpp->right;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPagedPaintDevice_Margins_right(void *, PyObject *, PyObject *);}
static int varset_QPagedPaintDevice_Margins_right(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::qreal sipVal;
     ::QPagedPaintDevice::Margins *sipCpp = reinterpret_cast< ::QPagedPaintDevice::Margins *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->right = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPagedPaintDevice_Margins_top(void *, PyObject *, PyObject *);}
static PyObject *varget_QPagedPaintDevice_Margins_top(void *sipSelf, PyObject *, PyObject *)
{
     ::qreal sipVal;
     ::QPagedPaintDevice::Margins *sipCpp = reinterpret_cast< ::QPagedPaintDevice::Margins *>(sipSelf);

    sipVal = sipCpp->top;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPagedPaintDevice_Margins_top(void *, PyObject *, PyObject *);}
static int varset_QPagedPaintDevice_Margins_top(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::qreal sipVal;
     ::QPagedPaintDevice::Margins *sipCpp = reinterpret_cast< ::QPagedPaintDevice::Margins *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->top = sipVal;

    return 0;
}

sipVariableDef variables_QPagedPaintDevice_Margins[] = {
    {InstanceVariable, sipName_bottom, (PyMethodDef *)varget_QPagedPaintDevice_Margins_bottom, (PyMethodDef *)varset_QPagedPaintDevice_Margins_bottom, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_left, (PyMethodDef *)varget_QPagedPaintDevice_Margins_left, (PyMethodDef *)varset_QPagedPaintDevice_Margins_left, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_right, (PyMethodDef *)varget_QPagedPaintDevice_Margins_right, (PyMethodDef *)varset_QPagedPaintDevice_Margins_right, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_top, (PyMethodDef *)varget_QPagedPaintDevice_Margins_top, (PyMethodDef *)varset_QPagedPaintDevice_Margins_top, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_QPagedPaintDevice_Margins, "\1QPagedPaintDevice.Margins()\n"
"QPagedPaintDevice.Margins(QPagedPaintDevice.Margins)");


static pyqt5ClassPluginDef plugin_QPagedPaintDevice_Margins = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QPagedPaintDevice_Margins = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPagedPaintDevice__Margins,
        SIP_NULLPTR,
        &plugin_QPagedPaintDevice_Margins
    },
    {
        sipNameNr_Margins,
        {189, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        4, variables_QPagedPaintDevice_Margins,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QPagedPaintDevice_Margins,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QPagedPaintDevice_Margins,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QPagedPaintDevice_Margins,
    assign_QPagedPaintDevice_Margins,
    array_QPagedPaintDevice_Margins,
    copy_QPagedPaintDevice_Margins,
    release_QPagedPaintDevice_Margins,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};