pipeline {

    agent {
        docker {
            image 'ubuntu:18.04'
        }
    }

    stages {

        stage('Prepare environment') {
            sh 'apt-get update -q'
            sh 'apt-get install cmake'
            sh 'apt-get install libglew-dev libglfw3-dev libglm-dev'
            sh 'mkdir build'
        }

        stage('Install toolchain') {
                    sh 'apt-get install cmake'
                    sh 'mkdir build'
                }

        stage('Build') {

            stage('gcc') {
                sh 'apt-get install g++'
                sh 'g++ --version'
                sh 'cd build'
                sh 'cmake ..'
                sh 'make'
            }

            stage('clang') {
                sh 'apt-get install clang'
                sh 'clang++ --version'
                sh 'cd build'
                sh 'cmake ..'
                sh 'make'
            }

        }
    }
}