#!groovy

// --------------------------------------------------------------------------
stage 'Grab SCM'

node('master') {
    clearContentUnix()
    checkout scm
    sh 'mkdir -p install'
    stash includes: '**', name: 'src'
}

// --------------------------------------------------------------------------
stage 'Build'

def nodes = [:]
nodes['lang-c-platform-linux'] = build_LangC_Unix('build-centos7')
nodes['lang-c-platform-macos'] = build_LangC_Unix('build-os-x')
parallel nodes

def clearContentUnix() {
    sh 'rm -fr -- *'
}

def archiveArtifacts(pattern) {
    step([$class: 'ArtifactArchiver', artifacts: pattern, fingerprint: true, onlyIfSuccessful: true])
}

def build_LangC_Unix(slave) {
    return { node(slave) {
        clearContentUnix()
        unstash 'src'
        sh 'mkdir build'
        sh 'cmake -Bbuid -H. -DCMAKE_INSTALL_PREFIX=install'
        sh 'cmake --build build'
        sh 'cmake --build build --target install'
        archiveArtifacts('install/**')
    }}
}
