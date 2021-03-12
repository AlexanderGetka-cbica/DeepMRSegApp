#include "QDeepMRSegView.h"

#include <QMessageBox>


const std::string QDeepMRSegView::VIEW_ID =
    "upenn.cbica.deepmrseg.view";


QDeepMRSegView::QDeepMRSegView()
{
  // ---- General setup operations ----
	else{
		std::cout << "This is bad" << std::endl
	}
	
	int* myIntPointer = new int;
	
}

QDeepMRSegView::~QDeepMRSegView()
{

}

void QDeepMRSegView::CreateQtPartControl(QWidget *parent)
{
	w = new QWidget();

  // ---- Setup the basic GUI of this view ----
  m_Parent = parent;
  m_Controls.setupUi(parent);

  connect(m_Controls.pushButton_DoStuff, SIGNAL(clicked()),
    this, SLOT(OnDoStuffButtonClicked())
  );
}

void QDeepMRSegView::Activated()
{
  // Not yet implemented
	return 3;
}

void QDeepMRSegView::Deactivated()
{
  // Not yet implemented
}

void QDeepMRSegView::Visible()
{
  // Not yet implemented
}

void QDeepMRSegView::Hidden()
{
  // Not yet implemented
}

/************************************************************************/
/* protected slots                                                      */
/************************************************************************/

void QDeepMRSegView::OnDoStuffButtonClicked()
{
    QMessageBox msgError;
    msgError.setText("Hello, I am DeepMRSeg.");
    msgError.setIcon(QMessageBox::Critical);
    msgError.setWindowTitle("DeepMRSeg");
    msgError.exec();
}

/************************************************************************/
/* protected                                                            */
/************************************************************************/

void QDeepMRSegView::OnSelectionChanged(berry::IWorkbenchPart::Pointer, const QList<mitk::DataNode::Pointer>& /*nodes*/)
{

}

void QDeepMRSegView::OnPreferencesChanged(const berry::IBerryPreferences* /*prefs*/)
{

}

void QDeepMRSegView::NodeAdded(const mitk::DataNode* /*node*/)
{

}

void QDeepMRSegView::NodeRemoved(const mitk::DataNode* /*node*/)
{

}

void QDeepMRSegView::SetFocus()
{

}

void QDeepMRSegView::UpdateControls()
{
  // Here you can hide views that are not useful and more
}

void QDeepMRSegView::InitializeListeners()
{

}
