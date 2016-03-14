#ifndef QT_PROJECT_WIZZARD_CONTENT_FLAGS_H
#define QT_PROJECT_WIZZARD_CONTENT_FLAGS_H

#include "qt/window/project_wizzard/QtProjectWizzardContent.h"

class QtDirectoryListBox;

class QtProjectWizzardContentFlags
	: public QtProjectWizzardContent
{
	Q_OBJECT

public:
	QtProjectWizzardContentFlags(ProjectSettings* settings, QtProjectWizzardWindow* window);

	// QtProjectWizzardContent implementation
	virtual void populateForm(QGridLayout* layout, int& row) override;

	virtual void load() override;
	virtual void save() override;

private:
	QtDirectoryListBox* m_list;
};

#endif // QT_PROJECT_WIZZARD_CONTENT_FLAGS_H