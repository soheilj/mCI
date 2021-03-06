% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ci_functions.R
\name{CI}
\alias{CI}
\title{concordance index function}
\usage{
CI(x, y, deltaX = 0, deltaY = 0, alpha = 0, outx = 1, npermut = 1e+06,
  ncpu = 1)
}
\arguments{
\item{x}{first vector}

\item{y}{second vector}

\item{npermut}{default 1000000, number of permutations to run to calculate p-value}

\item{ncpu}{number of cpu to use}
}
\value{
a list containg concordance index and p-value
}
\description{
To compute concordance index and p-value for given vector
}
\examples{
library(CI)
x <- 1:30; y <- x*x
CI(x=x, y=y, deltaX=0, deltaY=0, alpha =0, outx = 1, npermut=10000)
}
