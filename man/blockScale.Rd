\name{blockScale}
\alias{blockScale}
\title{Hard or soft block scaling}
\usage{
blockScale(X,type='hard',sigma2=1)
}
\arguments{
  \item{X}{\code{data.frame} or \code{matrix} to transform}

  \item{type}{type of block scaling: 'hard' or 'soft'}

  \item{sigma2}{desired total variance of a block (ie sum
  of the variances of all variables, default = 1),
  applicable when \code{type = 'hard'}}
}
\value{
a \code{list} with \code{Xscaled}, the scaled matrix and
\code{f}, the scaling factor
}
\description{
Hard or soft block scaling of a spectral matrix to constant
group variance. In multivariate calibration, block scaling
is used to down-weight variables, when one block of
variables dominates other blocks. With hard block scaling,
the variables in a block are scaled so that the sum of
their variances equals 1. Wen soft block scaling is used,
the variables are scaled such that the sum of variable
variances is equal to the square root of the number of
variables in a particular block.
}
\examples{
X <- matrix(rnorm(100),ncol=10)
# Hard block scaling
res <- blockScale(X)
apply(res$Xscaled,2,var) # sum of column variances == 1
}
\author{
Antoine Stevens
}
\references{
Eriksson, L., Johansson, E., Kettaneh, N., Trygg, J.,
Wikstrom, C., and Wold, S., 2006. Multi- and Megavariate
Data Analysis. MKS Umetrics AB.
}
\seealso{
\code{\link{blockNorm}},
\code{\link{standardNormalVariate}}, \code{\link{detrend}}
}

