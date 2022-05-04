Name:           bst
Version:        0.0.1
Release:        0
Summary:        Binary search tree implmentation with a shared library.
Packager: 	    HPE-Interns
license:        MIT
Source:         bst-0.0.1.tar.gz
BuildRoot:      %{_tmppath}/%{name}-root
BuildRequires:  gcc
BuildRequires:  make


%global debug_package %{nil}

%description
Bst implmentation basic application using C

%prep
rm -rf %{_topdir}/BUILD/*
%setup -c %{name}-%{version}

%build
%make_build

%install
rm -rf $RPM_BUILD_ROOT
mkdir -p %{buildroot}/usr/bin
mkdir -p %{buildroot}/usr/lib
cp test/main %{buildroot}/usr/bin/bst
cp compiled/libbst.so %{buildroot}/usr/lib/

%files
/usr/bin/bst
/usr/lib/libbst.so
